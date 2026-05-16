//https://codeforces.com/contest/2224/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;

void readVec(vector<long long>& v) {
for (long long& x : v) cin >> x;
}

void printVec(const vector<long long>& v) {
for (long long x : v) cout << x << " ";
cout << endl;
}
void printYes(){
    cout<<"YES"<<endl;
}
void printNo(){
    cout<<"NO"<<endl;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

ll tc;
cin >> tc;

while (tc--) {
ll n;
cin>>n;
vector<ll> nums(n);

readVec(nums);

for(ll i=n-2;i>=0;i--){
    if(nums[i+1]>0){
    nums[i] +=nums[i+1];
    }
}

ll pos_num=0;
for(ll i=0;i<n;i++){
  if(nums[i]>0){
  pos_num++;
  }
}

cout<< pos_num<<endl;
}
return 0;
}

// Intuition , if i+1 is positve then i can add nums[i] +=nums[i+1]