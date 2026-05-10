
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
   vector<ll> second_elememt;
   ll min_element=INT_MAX;

   while(n--){
    ll m;
    cin>>m;
    vector <ll> elements(m);
    readVec(elements);
    sort(elements.begin(),elements.end());
    second_elememt.pb(elements[1]);
    min_element=min(min_element,elements[0]);


   }
   ll max_beauty=0;
   for(auto &vl:second_elememt){
    max_beauty +=vl;

   }
   sort(second_elememt.begin(),second_elememt.end());
   max_beauty -=second_elememt[0];
   max_beauty +=min_element;
   cout<<max_beauty<<'\n';

}
return 0;
}
