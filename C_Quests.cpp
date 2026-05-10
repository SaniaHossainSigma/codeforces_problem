
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
vector <ll> initial_exp(n);
vector<ll> subsequent_exp(n);
readVec(initial_exp);
readVec(subsequent_exp);

ll ans=0,sum=0,mx=0;
for(ll i=0;i<min(n,k);i++){
    sum +=initial_exp[i];
   mx=max(mx,subsequent_exp[i]);
    ll total=sum + ((k-(i+1))*mx);
    ans=max(ans,total);
}
cout<<ans<<'\n';


}

return 0;
}
