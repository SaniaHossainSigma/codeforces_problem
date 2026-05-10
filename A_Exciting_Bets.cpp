
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
    ll a,b;
    cin>>a>>b;

    ll gcd_num= abs(a-b);
    ll opr;
    if (gcd_num==0  || a%gcd_num==0){
        opr=0;
    }
   
    else{
     opr= min(b%gcd_num,gcd_num- (b%gcd_num));
    }
    cout<<gcd_num<< " " << opr <<'\n';
   
    
    
    
}

return 0;
}
 