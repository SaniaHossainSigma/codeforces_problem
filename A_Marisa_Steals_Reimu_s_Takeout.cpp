// https://codeforces.com/contest/2228/problem/A
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

ll czero=0;
ll cone=0;
ll ctwo=0;

for( ll i=0;i<n;i++){
if(nums[i]==0){
    czero++;
}else if(nums[i]==1){
    cone++;
}else{
    ctwo++;
}
}
ll sum= czero;
ll x= min(cone,ctwo);
ll leftone=cone-x;
ll lefttwo=ctwo-x;
sum+=x;
sum +=(leftone/3);
sum +=(lefttwo/3);
cout<< sum<<endl;


}
return 0;
}
// In this problem I faced a problem as   i didnot realize 2,2,2 -> 6 which can be divided
// by 3 . and the other part is simply done 