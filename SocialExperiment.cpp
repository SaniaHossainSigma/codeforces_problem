

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
      ll n;
      cin>>n;
      if (n==2){
        cout<< 2 <<"\n";
      }
      else if(n==3){
        cout<< 3 << "\n"
      }
      else{
        if(n%2==0){
            cout<<0 <<"\n";
        }else{
            cout<< 1 << "\n";
        }
      }
    }

    return 0;
}
