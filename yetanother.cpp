//implementation of sieve of erathosthrene
#include<bits/stdc++.h>
using namespace std;

int main (  ){

      long long n=1e7;
      

      bool prime[n+1];
      memset (prime, true,sizeof(prime));

      for(long long p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
      }

     vector<long long> primenums;
      for(int p=2;p<=n;p++){
        if(prime[p]){
           primenums.push_back(p);
        }
      }
     

    long long tc;
    cin>>tc;
    while(tc--){
    
     long long s;
     cin>>s;

     vector <long long> v;

     for(long long i=0;i<s;i++){
        int nums;
        cin>>nums;
        v.push_back(nums);
     }
     /*
       cout<< "vector : ";
      for(auto vl:v){
        cout<< vl << "  ";
      }
      cout<<endl;
    */
  
      /* cout<< "prime : ";
      for(auto vl:primenums){
        cout<< vl << "  ";
      }
      cout<<endl;*/

// g++ yetanother.cpp
  bool run=true;
 
  for( long long j=0;j<primenums.size()&& run;j++){
    
    for(long long i=0;i<s;i++  ){
        if(v[i]%primenums[j]!=0){
            cout<<primenums[j]<<endl;
            run=false;
            break;
           
        }
    }}
  }

    return 0;
}
