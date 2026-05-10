#include<iostream>
using namespace std;
int main ( ){

  int tc;
  cin>>tc;

  while(tc--){
  int n;
  cin>>n;
  string str;
  cin>>str;
  int empty=0;
  for(int i=0;i<n;i++){
  if(str[i]=='.'){
    empty++;
  }
  }
  if(empty%2==0){
    cout<< 2 << endl;
  }else{
    cout<< empty <<endl;
  }

  }








    return0;
}