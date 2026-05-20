//https://codeforces.com/contest/2224/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;

void readVec(vector<long long>& v) {
for (long long& x : v) cin >> x;
}

void printVec(const vector<long long>& v) {
for (long long x : v) cout << x << " ";
cout << endl;
}
void printYes(){
    cout<<"YES"<<endl;
}
void printNo(){
    cout<<"NO"<<endl;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

ll tc;
cin >> tc;

while (tc--) {
ll n;
cin>>n;
vector<ll> nums(n);
readVec(nums);

// ll mx=*max_element(nums.begin(),nums.end());
sort(nums.begin(),nums.end());

vector<ll> uniq,dup;
for(ll i=0;i<n;i++){
    if(uniq.empty()|| uniq.back()!=nums[i]){
        uniq.push_back(nums[i]);
    }else{
        dup.push_back(nums[i]);
    }
}
vector<ll> ans;
ans.push_back(uniq[uniq.size()-1]);
for(ll i=0;i<uniq.size()-1;i++){
    ans.push_back(uniq[i]);
}
for(ll i=0;i<dup.size();i++){
    ans.push_back(dup[i]);
}



ll sum = ans[0]*n;

vector <ll> frq (n+2,0);
ll mex=0;

for(ll i=0;i<n;i++){
if(ans[i]<=n){
frq[ans[i]]++;
}
while(frq[mex]>0){
    mex++;
}
sum +=mex;

}

cout<<sum<<endl;

}
return 0;
}

