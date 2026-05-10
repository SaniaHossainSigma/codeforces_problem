
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

    ll tc;
    cin>>tc;

    while(tc--){
      ll n;
      cin>>n;

      string str=to_string(n);
      bool found00=false;
      ll dis00=-1;
       bool found25=false;
      ll dis25=-1;
       bool found50=false;
      ll dis50=-1;
       bool found75=false;
      ll dis75=-1;
       for(ll i=n-1;i>=0;i--){
      
        if(str[i]=='0'){
          for(int j=i-1;j>=0;j--){
            if(str[j]=='0'){
              found00=true;
              dis00=i-j;
            }
          }
        }
        if(str[i]=='5'){
          for(int j=i-1;j>=0;j--){
            if(str[j]=='2'){
              found25=true;
              dis25=i-j;
            }
          }
        }
        if(str[i]=='0'){
          for(int j=i-1;j>=0;j--){
            if(str[j]=='5'){
              found50=true;
              dis50=i-j;
            }
          }
        }
         if(str[i]=='5'){
          for(int j=i-1;j>=0;j--){
            if(str[j]=='7'){
              found75=true;
              dis75=i-j;
            }
          }
        }
       }

      vector<ll> nums;
      if(found00){
        nums.pb(dis00);
      }
       if(found25){
        nums.pb(dis25);
      }
       if(found75){
        nums.pb(dis75);
      }
       if(found50){
        nums.pb(dis50);
      }

      ll result=*min_element(nums.begin(),nums.end());
      cout<<result <<"\n";


      
      }
    return 0;
}
