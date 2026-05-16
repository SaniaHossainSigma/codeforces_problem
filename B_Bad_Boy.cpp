//https://codeforces.com/contest/1537/problem/B
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
ll n,m,i,j;
cin>>n>>m>>i>>j;

cout<< "1"<< " "<< "1"<<" "<< n << " "<<m << endl;

}

return 0;
}

// Intuition: what can be the max diff ??
// it will be 1,1 and last  n,m