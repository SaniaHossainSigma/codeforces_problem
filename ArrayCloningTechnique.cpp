//  g++ ArrayCloningTechnique.cpp
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

#define endl '\n'

const int MOD=1e9 + 7;
const int INF= 1e9;

void readVec(vector<long long> &v) {
    for (auto &x : v) cin >> x;
}
void printVec(const vector<long long>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main ( ){
  
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;

    while(tc--)
    {
      ll n;
        cin>>n;
        vector<ll> arr(n);
        readVec(arr);

        map<ll,ll> mpp;

        for(int itr=0;itr<n;itr++){
            mpp[arr[itr]]++;
        }
        ll high_frq=0;
        for(auto itr:mpp){
            high_frq=max(high_frq,itr.second);
        }

        
        ll opr=0;
        
        while(high_frq<n){
            opr++;

            if(high_frq*2<=n){
                opr+=high_frq;
                high_frq=high_frq*2;
            }else{
                opr +=n-high_frq;
                high_frq=n;
            }


        }


  cout<< opr<<'\n';




    }





}

