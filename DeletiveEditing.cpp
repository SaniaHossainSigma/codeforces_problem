// g++ DeletiveEditing.cpp
//./a.exe

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define endl '\n'

const int MOD=1e9 + 7;
const int INF= 1e9;

 void readVec(vector<int> &v){
    for(int &x: v) cin >> x;
 }
 void printVec(const vector<int> &v){
    for(int x:v) cout<< x ;
    cout<<endl;
 }

int main( ){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin>>tc;

  while(tc--){
    string s,t;
    cin>>s>>t;
    int p=s.size();
    int q=t.size();

    vector<int> frq(26,0);

    for(int i=0;i<q;i++){
        frq[t[i]-'A']++;
    }
    for(int i=p-1;i>=0;i--){
        if(fr[t[s[i]]-'A'] > 0){
            fr[t[s[i]]-'A']--;

        }else{
            s[i]='.';
        }
    }

    string result="";
    for(int i=0;i<p;i++){
        if(s[i]!='.'){
            result +=s[i];
        }
    }
  if(result==t){
    cout<< "YES\n";
  }else{
    cout<< "NO\n";
  }
  }




    return 0;
}
