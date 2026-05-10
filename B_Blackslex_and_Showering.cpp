
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
    vector<ll>elevator(n);
    readVec(elevator);

    ll sum=0;

    for(int i=1;i<n;i++){
        sum +=abs(elevator[i]-elevator[i-1]);
    }
    ll corner_1=sum-abs(elevator[1] - elevator[0]);
    ll corner_2 =sum-abs(elevator[n-1]-elevator[n-2]);

    ll ans=min(corner_1,corner_2);

    for(int i=1;i<n-1;i++){
        ans = min(ans,sum-abs(elevator[i]-elevator[i-1])-abs(elevator[i+1]-elevator[i])+abs(elevator[i+1]-elevator[i-1]));
    }
   cout<< ans<<"\n";



    }


    return 0;
}
