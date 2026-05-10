#include<iostream>
using namespace std;

int main (  ){

  int tc;
  cin>>tc;

  while(tc--){
    int integer;
    cin>>integer;
    if(integer%3==0){
        cout<<"Second"<<endl;
    }else{
        cout<<"First"<<endl;
    }
  }


    return 0;
}