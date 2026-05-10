
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
    ll n,k,x;
    cin>>n>>k>>x;

    if(x!=1){
        cout<< "YES" <<'\n';
        cout<<n <<'\n';
        while (n--)
        {
            cout<< 1 <<" ";
        }
        cout<<'\n';
        
    }else{
       if(k==1){
        cout<< "NO" <<'\n';
       }
    else if (k==2 && n%2!=0){
          cout<< "NO" <<'\n';
    }
    else{
        cout<< "YES"<<'\n';

        if(n%2==0){
            cout<< n/2 << '\n';
            ll m=n/2;
            while(m--){
                cout<< 2<< " ";
            }
            cout<<'\n';
        }else{
            cout<< n/2 << '\n';
            cout<< 3<< " ";
            ll m=(n-3)/2;
            while(m--){
                cout<<2<<" ";
            }
            cout<<'\n';
        }
     
    }
        
    }
        
    
    
    
}
//passed
return 0;
}
 