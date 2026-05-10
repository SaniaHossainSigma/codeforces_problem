
// g++ TwoScreens.cpp
// ./a.exe

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;


void readVec(vector<long long >& v) {
    for (long long  &x : v) cin >> x;
}


void printVec(const vector<long long >& v) {
    for (long long  x : v) cout << x << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        string s1,s2;
        cin>>s1>>s2;
        int p=-1;
        if(s1.size()<=s2.size()){
            p=s1.size();
        }else{
            p=s2.size();
        }
        bool copy=false;
        int idx=0;
        for(int i=0;i<p;i++){
            if(s1[i]==s2[i]){
                idx++;
                copy=true;
            }else{
                break;
            }
        }
        int ans=idx+(s1.size()-idx)+(s2.size()-idx);
    
        if(copy){
            cout<<ans+1 <<"\n";
        }else{
            cout<< ans << "\n";
        }
        

    
      
    }

    return 0;
}
