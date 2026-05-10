
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
ll counting1=0;
ll counting0=0;
for(int i=0;i<nums.size();i++){
if(nums[i]==1  ){
    counting1++;
}
if(nums[i]==0){
    counting0++;
}
}

ll ans=(pow(2,counting0))*counting1;
cout<<ans<<'\n';



}

return 0;
}
