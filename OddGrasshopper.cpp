// g++ OddGrasshopper.cpp
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

    ll t;
    cin >> t;
    while (t--) {
      
        ll x,n;
        cin>>x>>n;

        ll finalpos=-1;

        if(n%4==0){
            finalpos=0;
        }else if (n%4==1){
            finalpos=-n;
        }else if(n%4==2){
            finalpos=1;
        }else{
            finalpos=n+1;
        }

        if(x%2==0){
            cout<< x+finalpos<< "\n";
        }else{
            cout<< x-finalpos <<"\n";
        }
    }

    return 0;
}
