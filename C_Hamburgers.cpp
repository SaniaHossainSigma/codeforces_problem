

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

     string str;
     cin>>str;
 
     ll nb,ns,nc;
     cin>>nb>>ns>>nc;
    
     ll pb,ps,pc;
     cin>>pb>>ps>>pc;
   
     ll r;
     cin>>r;

    ll b=0,s=0,c=0;
    for(int i=0;i<str.size();i++){
       if(str[i]=='B'){
        b++;
       }
       else if( str[i]=='S'){
        s++;
       }else{
        c++;
       }
    }
    ll low=0;
    ll high=1e15;
    ll ans=0;
   

    while(low<=high){
        ll mid=(low+high)/2;
        ll x=max(0ll,b*mid-nb);
        ll y =max(0ll,s*mid-ns);
        ll z=max(0ll,c*mid-nc);

        ll cost=pb*x + ps*y + pc*z;
        if(cost>r){
            high=mid-1;
        }else{
            ans=mid;
            low=mid+1;
        }
    }
    cout<< ans <<'\n';

    return 0;
}
