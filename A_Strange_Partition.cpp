
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
ll n,x;
cin>>n>>x;
vector<ll> nums(n);
readVec(nums);

ll maximum=0;
ll total=0;

for(ll i=0;i<n;i++)
{
    total +=nums[i];
    ll y=ceil((double)nums[i]/x);
    maximum +=y;
}

ll minimum=ceil((double)total/x);

cout<<minimum<< " "<< maximum<<endl;





}

return 0;
}

