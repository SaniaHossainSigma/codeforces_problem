
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
ll n;
cin>>n;
vector<ll> nums(n);
readVec(nums);
ll max_diff=0;
// case1 a1=>locked
for(ll i=1;i<n;i++){
  ll x=nums[i]-nums[0];
  max_diff=max(max_diff,x);
}
// case 2 an->locked
for(ll i=0;i<n-1;i++){
    ll x=nums[n-1]-nums[i];
     max_diff=max(max_diff,x);
}
// case 3 none of them locked
for(ll i=0;i<n-1;i++){
    ll x=nums[i]-nums[i+1];
    max_diff=max(max_diff,x);
}

ll y=nums[n-1]-nums[0];
max_diff=max(max_diff,y);
cout<<max_diff<<'\n';



}

return 0;
}
