// g++ TheSecretNumber.cpp
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

     ll t;
     cin>>t;

     while(t--){
      ll  n;
        cin>>n;
       ll k=1;
       ll mul=10;
        vector <ll> nums;
        while(k<=17){
            if(n%(1+mul)==0){
                nums.pb(n/(1+mul));
            }
            k++;
            mul *=10;
        }
        sort(nums.begin(),nums.end());
        cout<<nums.size()<<"\n";
        if(nums.size()!=0){
        printVec(nums);
        }
        }
     

    return 0;
}
