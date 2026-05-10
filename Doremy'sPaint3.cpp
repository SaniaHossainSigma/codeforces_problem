// g++ Doremy'sPaint3.cpp
// ./a.exe
#include<bits/stdc++.h>
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
      ll n;
      cin>>n;
      vector <ll> nums(n);
      readVec(nums);
     
      map <ll,ll> mpp;
      for(int i=0;i<n;i++){
        mpp[nums[i]]++;
      }
      if(mpp.size()>=3){
        cout<< "NO"<<"\n";
      }else {
        ll frq1=mpp.begin()->second;
        ll frq2=mpp.rbegin()->second;
        ll diff=abs(frq1-frq2);
        if(mpp.size()==2 && diff=1){
             cout<< "YES"<<"\n";
        }else{
             cout<< "NO"<<"\n";
        }
      }
      
    }

    return 0;
}



