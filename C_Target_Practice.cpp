
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
cin>>tc;
while (tc--)
{
    ll ans=0;
    ll arr[10][10]={{1,1,1,1,1,1,1,1,1,1},
                   {1,2,2,2,2,2,2,2,2,1},
                     {1,2,3,3,3,3,3,3,2,1},
                  {1,2,3,4,4,4,4,3,2,1},
                  {1,2,3,4,5,5,4,3,2,1},
                    {1,2,3,4,5,5,4,3,2,1},
                     {1,2,3,4,4,4,4,3,2,1},
                     {1,2,3,3,3,3,3,3,2,1},
                     {1,2,2,2,2,2,2,2,2,1},{1,1,1,1,1,1,1,1,1,1}};

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;
            cin>>c;
            if(c=='X'){
            ans+=arr[i][j];
            }
        }
    }
    cout<< ans<<'\n';
}


return 0;
}
