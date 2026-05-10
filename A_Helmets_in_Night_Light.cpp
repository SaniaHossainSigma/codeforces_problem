
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

    ll tc;
    cin>>tc;

    while(tc--){
     ll n,p;
     cin>>n>>p;

     vector<ll> person_num(n);
     readVec(person_num);
     vector<ll> price(n);
     readVec(price);
     vector<ll>tmp(n);


     vector <pair<ll,ll>> v_pair ;
     
     for(ll i=0;i<n;i++){
        v_pair.pb({price[i],person_num[i]});
     }
     sort(v_pair.begin(),v_pair.end());

     for(ll i=0;i<v_pair.size();i++){
        price[i]=v_pair[i].first;
        person_num[i]=v_pair[i].second;
     }

    ll cost=p;
    ll people=1;

    for(int i=0;i<n;i++){
        if(price[i]>=p){
            break;
        }
        if((people+person_num[i])>n){
            cost += (n-people)*price[i];
            people=n;
            break;
        }else{
          cost += person_num[i]*price[i];
          people +=person_num[i];


        }
    }
    if(people<n){
        cost += (n-people)*p;
    }
    cout<< cost <<"\n";

   

    }


    return 0;
}
