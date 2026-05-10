// g++ YesorYes.cpp
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
      string str;
      cin>>str;
      
      int count_y=0;
      for(int i=0;i<str.size();i++){
        if(str[i]=='Y'){
          count_y++;
        }
      }
      if(count_y>1){
        cout<<"NO\n";
      }else{
        cout<<"YES\n";
      }


      }

    
    return 0;
}
