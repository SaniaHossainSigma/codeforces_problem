
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
ll n,k;
cin>>n>>k;
vector<ll> nums (n*k);
readVec(nums);
ll median;
if(n%2==0){
    median=n/2;
}else{
    median=(n+1)/2;
}
ll reduce=n-median;
ll first=(n*k)-1-reduce;
ll sum=nums[first];
// cout<< nums[first] << " ";
k--;
first = first-reduce-1;

while(k--){
  sum +=nums[first];
//   cout<< nums[first] << " ";
  first = first-reduce-1;
  
}
// cout<< endl;
// cout<< "sum -> ";
cout<< sum<<endl;
}

return 0;
}

