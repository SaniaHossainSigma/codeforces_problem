// g++ ChewbaсcaandNumber.cpp
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

    ll x;
    cin>>x;
    ll  mul=1;
    ll total=0;

    while(x>0){
        ll y=x%10;
      ll p=9-y;
      ll q=y;
      if(p<y){
        q=p;
      }
      int x=q*mul;
      total +=x;
      mul *=10;
      x=x/10;
    }

    cout<<total << "\n";
    return 0;
}

