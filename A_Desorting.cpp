
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

bool sorted=true;
for(ll i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        sorted=false;
        break;
    }
}

if(!sorted){
    cout<<0 <<'\n';
}else{
   ll min_el=INT_MAX;
    ll left=-1;
    ll right=-1;
    for(ll i=0;i<n-1;i++){
        ll x=a[i+1]-a[i];
        min_el=min(min_el,x);
        if(min_el==x){
            left=a[i];
            right=a[i+1];
        }

    }
    ll opr=((right-left)/2)+1;
   

cout<< opr << '\n';
}






}

return 0;
}
 