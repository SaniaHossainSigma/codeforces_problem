//  g++ BinaryArrayGame.cpp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;


void readVec(vector<int>& v) {
    for (int &x : v) cin >> x;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       vector <int> nums(n);
       readVec(nums);
        if(nums[0]==1  || nums[n-1]==1){
            cout<<"ALICE\n";
        }else{
               cout<<"BOB\n";
        }
      
    }

    return 0;
}
