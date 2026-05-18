//https://codeforces.com/contest/2228/problem/B
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

ll n,x1,x2,k;
cin>>n>>x1>>x2>>k;
if(n<=3){
    cout<<1<<endl;
}else{ 
ll d= min(abs(x2-x1),n-(abs(x2-x1)));
cout<<d+k<<endl;

}
}
return 0;
}

//  if n<=3 then always the ans will be 1
//  else  distance will be differnece between x1 &  x2  or n - x1-x2
// the minimum distance will be taken by Reimu, but reimala will try to delay and she can delay for
// k times s0  distance+k