// g++ NewYearString.cpp
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
        int n;
        cin>>n;
        string s;
        cin>>s;
       bool exist=false;
        for(int i=0;i<=n-4;i++){
            if(s[i]=='2'){
                if(s[i+1]=='0'){
                     if(s[i+2]=='2'){
                          if(s[i+3]=='5'){
                          exist=true;
                          break;
                          }
                     }
                }
            }
        }
        if(!exist){
            cout<< 0 <<"\n";
        }else {
            bool second_exist=false;
             for(int i=0;i<=n-4;i++){
            if(s[i]=='2'){
                if(s[i+1]=='0'){
                     if(s[i+2]=='2'){
                          if(s[i+3]=='6'){
                          second_exist=true;
                          break;
                          }
                     }
                }
            }
        }
        if(second_exist){
            cout<<0 <<"\n";
        }else{
              cout<<1 <<"\n";
        }

        }
        
      
    }

    return 0;
}
