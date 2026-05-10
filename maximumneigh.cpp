// g++ maximumneigh.cpp
// ./a.exe
#include<bits/stdc++.h>
using namespace std;
int main( ){
  int tc;
  cin>>tc;
  
    
  while(tc--){
    int n;
    cin>>n;
    int maximum=1;
 for(int i=1;i<=n;i++){
    int num=i;
    if(i+1<=n && (i+1%n)!=1){
     num++;
    }
    if(i-1>0 && (i+1%n)!=0){
     num--;
}if((i<(n*n)-n+1)){
    num+=i+n;

 }
if(i>n){
     num+=i-n;
}

maximum=max(maximum,num);
cout<<maximum<<endl;

}
 }
    return 0;
}