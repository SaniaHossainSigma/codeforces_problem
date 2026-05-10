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
  bool found=false;
  
  for(int i=1;i<n-1;i++){
  
    if(str[i-1]=='.' && str[i]=='.'  && str[i+1]=='.' ){
        found=true;
        break;
    }
  }
  if(found){
    cout<< 2 << endl;
  }else{

    int empty=0;
    for(int i=0;i<n;i++){
        if(str[i]=='.'){
            empty++;
        }
    }
    cout<< empty <<endl;
  }
  

  }
}
