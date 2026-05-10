#include<bits/stdc++.h>
using namespace std;

int main ( ){

  int tc;
  cin>>tc;
  while(tc--){
    int n;
    cin>>n;

    if(n%2!=0){
        cout<< 0 << endl;
    }else{
        int combination=n/4;
        cout<<combination+1<<endl;
    }
  }
    return 0;
}
//g++ shizuku.cpp