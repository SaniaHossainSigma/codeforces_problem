
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
vector<ll> a(n);
readVec(a);
ll mx = *max_element(a.begin(),a.end());
vector<ll> b;
vector<ll>c;
for(auto &vl:a){
	if(vl!=mx){
		b.push_back(vl);
	}else{
		c.push_back(vl);
	}
}
if(b.size()==0){
	cout<<-1<<'\n';
}else{
	cout<<b.size()<<'\n';
	for(auto &v:b){
		cout<<v <<" ";
	}
	cout<<'\n';
	cout<<c.size()<<'\n';
	for(auto &vl:c){
		cout<<vl <<" ";
	}
	cout<< '\n';
}
}

return 0;
}
