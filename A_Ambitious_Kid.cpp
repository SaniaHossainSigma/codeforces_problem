
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

ll n;
cin>>n;
vector<ll> nums(n);
readVec(nums);
vector <ll> copy;
for(ll i=0;i<n;i++){
  ll vl=abs(nums[i]) ;
  copy.push_back(vl);
}
ll minvl =*min_element(copy.begin(),copy.end());
cout<<minvl <<'\n';

return 0;
}
