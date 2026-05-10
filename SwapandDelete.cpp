// g++ SwapandDelete.cpp
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
      string s;
      cin>>s;
      ll  countforzero=0,countforone=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            countforzero++;
        }else{
            countforone++:
        }
      }

      ll tsize=0;

      for(int i=0;i<s.size();i++){

        if(s[i]=='1' && countforzero!=0){
            tsize++;
            countforzero--;
        }
        else if(s[i]=='0' && countforone!=0){
            tsize++;
            countforone--;
        }else{
            break;
        }
      }
      cout<< s.size()-tsize<<"\n";
      
    }

    return 0;
}
