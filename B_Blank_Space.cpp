
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
ll mx=0;
ll countZero=0;
for(ll i=0;i<n;i++){
    if(nums[i]==0){
        countZero++;
    }
    else{
        mx=max(mx,countZero);
        countZero=0;
    }
}
mx=max(mx,countZero);
cout<<mx<<endl;
}

return 0;
}

