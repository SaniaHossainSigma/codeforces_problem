
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
   vector<ll>nums (n);
   readVec(nums);
   
   vector <ll> elements;
   elements.pb(nums[0]);
   for(ll i=1;i<nums.size();i++){

      if(elements.back()>nums[i]){
         elements.pb(1);
      }
     elements.pb(nums[i]);
   }
   cout<<elements.size()<<'\n';
   for(auto &vl:elements){
      cout<<vl <<" ";
   }
   cout<<'\n';
}


return 0;
}
