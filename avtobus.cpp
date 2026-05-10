#include<bits/stdc++.h>
using namespace std;
// g++ avtobus.cpp

int main () {
  long long tc;
  cin>>tc;

  while(tc--){
long long n;
    cin>>n;

    if(n<4 ||  n%2!=0){
    cout<< -1 <<endl;
    }else{
        long long minimum= ceil((n*1.0)/6);
        long long maximum=n/4;
        cout<< minimum <<" "<< maximum <<endl; 
    }


  }
  



    return 0;
}