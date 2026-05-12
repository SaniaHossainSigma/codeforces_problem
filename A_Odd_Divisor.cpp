//  https://codeforces.com/contest/1475/problem/A
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
bool  odddivisor=false;
while(n>0)
{
    if(n%2==0){
        n=n/2;
    }
    else{
        break;
    }
}

if(n>1){
    printYes();
}
else{
    printNo();
}
}
return 0;
}


