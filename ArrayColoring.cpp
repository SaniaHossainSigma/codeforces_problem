
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
    while (t--) {
       ll n;
       cin>>n;
       vector<ll> nums(n);
       readVec(nums);

       for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            nums[i]=0;
        }else{
            nums[i]=1;
        }
       }
      bool pos=true;
       for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            pos=false;
            break;
        }
       }
       if(pos){
        cout<<"YES"<<"\n";
       }else{
        cout<<"NO"<<"\n";

       }
      
    }

    return 0;
}
