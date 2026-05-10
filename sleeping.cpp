#include<bits/stdc++.h>
using namespace std;
int main( ){
int tc;
cin>>tc;
while(tc--){
int n,k;
cin>>n>>k;
string str;
cin>>str;

 int sleep=0;
int skip=0;
 for(int i=0;i<n;i++){
  if(str[i]=='1'){
    skip=k;
  }else{
    if(skip==0){
      sleep++;
    }else{
      skip--;
    }
  }

 }
 cout<< sleep <<endl;


}
  return 0;
}
// g++ sleeping.cpp
//./a.exe