
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
        ll m,n;
        cin>>m>>n;
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        ll result1,result2;


        if((x1==1  && y1==1) || (x1==1 && y1==n) || (x1==m && y1==1) || (x1==m && y1==n)){
            result1=2;
        }
    else if(x1==1 || x1==m || y1==1 || y1==n){
            result1=3;
        }
        else{
            result1=4;
        }


          if((x2==1  && y2==1) || (x2==1 && y2==n) || (x2==m && y2==1) || (x2==m && y2==n)){
            result2=2;
        }
    else if(x2==1 || x2==m || y2==1 || y2==n){
            result2=3;
        }
        else{
            result2=4;
        }
       cout<<min(result1,result2)<<"\n";
        
     }
    return 0;
}
