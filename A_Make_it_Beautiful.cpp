
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
vector<ll> tmp (n);
readVec(tmp);

sort(tmp.begin(),tmp.end());
if(tmp[0]==tmp[n-1]){
    printNo();
}else{
    printYes();
    cout<< tmp[n-1]<<" ";
    for(ll i=0;i<n-1;i++){
        cout<< tmp[i]<<" ";
    }
    cout<<endl;
}
}


return 0;
}

