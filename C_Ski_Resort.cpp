
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

    ll n,k,q;
    cin>>n>>k>>q;
    vector <ll> weather (n);
    readVec(weather);
    for(auto &vl:weather){
        if(vl>q){
            vl=0;
        }else{
            vl=1;
        }
    }

    ll consecutive=0;
    vector<ll> tmp;
    for(ll i=0;i<n;i++){
        if(weather[i]==1){
            consecutive++;
        }
        else{
            if(consecutive>=k){
                tmp.push_back(consecutive);
            }
            consecutive=0;
            
    }

    if(i==n-1){
         if(consecutive>=k){
                tmp.push_back(consecutive);
            }
    }

}


ll ans=0;
for(ll i=0;i<tmp.size();i++){
   ll l=tmp[i];
     ans +=(((l-k)+1)*((l-k)+2))/2;


}
cout<<ans <<'\n';
}
return 0;
}
