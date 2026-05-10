
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
vector <ll> nums(7);
readVec(nums);
ll mx= *max_element(nums.begin(),nums.end());
bool done=false;
for(ll i=0;i<7;i++){
    if(nums[i]==mx && done==false){
        done=true;

    }else{
        nums[i] *=-1;
    }
}
ll sum=0;
for(ll i=0;i<7;i++){
    sum +=nums[i];
}
cout<< sum <<'\n';
}

return 0;
}
