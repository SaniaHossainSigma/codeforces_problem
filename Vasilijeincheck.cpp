#include<bits/stdc++.h>
using namespace std;

int main (  ){

long long  tc;
cin>>tc;

while(tc--){
long long   n,k,x;
cin>>n>>k>>x;

 
long long minsum=(k*(k+1))/2;
long long s1=((n-k)*(n-k+1))/2;
long long max_sum=(n*(n+1))/2-s1;



if(x>max_sum || x<minsum){
    cout<< "NO"<<endl;
}else{
    cout<<"YES"<<endl;
}

}




return 0;
// g++ Vasilijeincheck.cpp    
}
