
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
vector<pair<ll,ll>> health(n);
for(ll i=0;i<n;i++){
	ll x;
	cin>>x;
  health[i]={x,i+1};
}
for(auto &vl:health){
	vl.first=vl.first % k;
	if(vl.first==0){
		vl.first=k;
	}
}
sort(health.begin(),health.end(),[&](pair<ll,ll>a,pair<ll,ll>b){
if(a.first !=b.first)
return a.first>b.first;

return a.second<b.second;
});

for(auto vl:health){
	cout<<vl.second <<" ";
}
cout<<'\n';
}

return 0;
}
