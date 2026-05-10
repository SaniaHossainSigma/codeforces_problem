
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
        ll n,k;
        cin>>n>>k;
        vector<ll> nums(n);
        readVec(nums);
        ll ans=INT_MAX;
        ll counting=0;
       
            for(ll i=0;i<n;i++){
               if(nums[i]%k==0){
                ans=0;
               }
               if(nums[i]%2==0){
                counting++;
               }
               ans=min(ans,k-(nums[i]%k));
        }
        ll ans_case4;
        if(k==4){
            if(counting>=2){
                ans_case4=0;
            }
            if(counting==1){
                ans_case4=1;
            }
            if(counting==0){
                ans_case4=2;
            }
            ans=min(ans,ans_case4);
        }
      cout<<ans <<'\n';



    }


    return 0;
}
