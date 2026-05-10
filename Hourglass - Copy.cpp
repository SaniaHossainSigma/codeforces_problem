
// g++ Hourglass.cpp
// ./a.exe
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;


void readVec(vector<long long >& v) {
    for (long long  &x : v) cin >> x;
}


void printVec(const vector<long long >& v) {
    for (long long  x : v) cout << x << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        ll s,k,m;
        cin>>s>>k>>m;

        if(s>k){
            m=m%(2*k);

            if(0<=m && m<=k-1){
                cout<<s-m <<"\n";
            }
           else{
            cout<<k-(m-k)<< "\n";
           }
        }
        
        
        
        else{

        m=m%k;
        if(0<=m &&  m<s){
            cout<< s-m << "\n";
        }else{
            cout<< 0 <<"\n";
        }






        }

      
    }

    return 0;
}
