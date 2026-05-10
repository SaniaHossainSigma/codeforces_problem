//g++ permutationswap.cpp
//./a.exe
 #include<bits/stdc++.h>
#include <numeric>
 using namespace std;
 int main ( ){
 int tc;
 cin>>tc;
 while(tc--){
    int n;
    cin>>n;
    vector<int> permutation(n);
    for(int i=0;i<n;i++){
        cin>>permutation[i];
    }
    vector <int> maxk;
   
    for(int i=0;i<n;i++){
        int nums=abs(permutation[i]-(i+1));
       // cout<<"abs nums " << nums <<endl;
       maxk.push_back(nums);
        
    }
    
      // sort(maxk.begin(),maxk.end());
      int k=maxk[0];
      // for(auto &vl:maxk){
      //   if(vl!=0){
      //       cout<<vl <<endl;
      //       break;
      //   }
      // }
      for(int i=1;i<maxk.size();i++){
        k=std::gcd(k,maxk[i]);
      }
      cout<<k<<endl;
    
 }
 


 return 0;
 }