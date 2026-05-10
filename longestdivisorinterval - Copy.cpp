//g++ longestdivisorinterval.cpp

#include<bits/stdc++.h>
using namespace std;

int main (){ 

long long  tc;
   cin>>tc;
   while(tc--){
   long long nums;
    cin>>nums;
    
    if(nums%2 !=0){
      cout<<1<<endl;
    }else if( nums%2==0 && nums%3!=0){
       cout<<2<<endl;
    }else{
     
      int div=0;
     for(int i=1;i<=nums;i++){
      if(nums%i !=0){
         break;
      }
      div++;
     }
     cout<<div<<endl;
    
    }
   
  
    }

  

    return 0;
}