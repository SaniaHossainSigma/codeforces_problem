//g++ Don'tTrytoC ount.cpp
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
        ll n,m;
        string x,s;
        cin>>x>>s;

        bool found=false;
        ll check=10;
        int opr=0;

        while (!found)
        {
           if(x.find(s) !=string::npos){
            found=true;
           }else{
            x.append(x);
            opr++;
           }
           if(x.size()>=25){
            break;
           }

        }
        
      if(found){
        cout<<opr<<"\n";
      }else{
        cout<<-1<<"\n";
      }
    }

    return 0;
}