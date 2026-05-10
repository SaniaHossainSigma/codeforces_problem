
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

vector<ll> even;
vector<ll> odd;
ll count1=0;
for(ll i=0;i<n;i++){
if(nums[i]%2 !=0){
    count1++;
}
else{
    if(count1>1){
        odd.push_back(count1);
    }
    count1=0;
}
}

if(count1>1){
        odd.push_back(count1);
    }

ll count2=0;
for(ll i=0;i<n;i++){
if(nums[i]%2 ==0){
    count2++;
}
else{
    if(count2>1){
        even.push_back(count2);
    }
    count2=0;
}
}
if(count2>1){
        even.push_back(count2);
    }

ll total=0;
if(even.size()>=1){
for(ll i=0;i<even.size();i++)
{
    total +=even[i]-1;
}
}
if(odd.size()>=1){
for(ll i=0;i<odd.size();i++)
{
    total +=odd[i]-1;
}
}

cout<< total << endl;






}

return 0;
}

