
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
cin>>tc;
while (tc--)
{
  ll n,k,p,m;
  cin>>n>>k>>p>>m;
  vector<ll> nums(n);
  readVec(nums);
  
  ll counting=0;
  while(m>0){
    if(p<=k){
        counting++;
        m -=nums[p-1];
        p=n;
    }else{
        ll diff=p-k;
        
    }

  }

}
return 0;
}
