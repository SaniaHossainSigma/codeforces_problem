#include<bits/stdc++.h>
using namespace std;

int main( ){
   
     int tc;
     cin>>tc;
     while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==1 || n-k==1){
            cout<<"YES"<<endl;
        }else{

        map <char,int> mpp;

        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        int odd=0;
        for(auto itr:mpp){
           cout<< itr.first << "  " << itr.second << endl;
           if(itr.second%2 !=0){
            odd++;
           }
        }
  // g++ chemistry.cpp

   if(odd-k==1){
    cout<<"YES"<<endl;
   }else if(odd==k){
    cout<<"YES"<<endl;
   }else if(k>odd){
     cout<<"YES"<<endl;
    }
     else{
   cout<<"NO"<<endl;
     }
   }
    }

    return 0;
}