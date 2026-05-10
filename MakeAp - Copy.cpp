
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
      ll a,b,c;
      cin>>a>>b>>c;

      if(b-a==c-b){
        cout<< "YES"<<"\n";
      }else{
        //  c
        if(((a+((b-a)*2))%c==0) &&  ((a+((b-a)*2))>=c) && ((a+((b-a)*2))!=0)) {
              cout<< "YES"<<"\n";
        }
        // b
       else if(((((c-a)/2)+a)%b==0) && ((((c-a)/2)+a)>=b)  && ((((c-a)/2)+a)!=0) && ((((c-a)%2)==0))){
         cout<< "YES"<<"\n";
       }
       else if(((b-(c-b))%a==0)  && ((b-(c-b))>=a) &&  ((b-(c-b))!=0)) {
           cout<< "YES"<<"\n";
       }
       else{
           cout<< "NO"<<"\n";
       }

      }
  

    }

    return 0;
}
