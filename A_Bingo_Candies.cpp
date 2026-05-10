
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
  ll n;
  cin>>n;
  ll m=n;
  vector<ll> elements;
  while(n--){
    vector <ll> nums(m);
    readVec(nums);
    for(auto &vl:nums){
        elements.pb(vl);
    }
  }
  map <ll,ll> mpp;
  for(ll i=0;i<elements.size();i++){
    mpp[elements[i]]++;
  }
  bool poss=true;
  for(auto &vl:mpp){
    if(vl.second>(m*m)-m){
        poss=false;
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
