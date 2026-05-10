
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

int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

ll tc;
cin >> tc;

while (tc--) {
ll n,k;
cin>>n>>k;
vector<ll> nums(n);
readVec(nums);
bool poss=false;
for(ll i=0;i<nums.size();i++){
    if(nums[i]==k){
        poss=true;
        break;
    }
}
if(poss){
    cout<<"YES"<<'\n';
}else{
    cout<<"NO"<<'\n';  
}



}

return 0;
}
