#include<iostream>
using namespace std;
int main ( ){
    // print a pyramid
    int n;
    cin>>n;
    int p=1;
    for(int i=0;i<n;i++){
   for(int j=0;j<p;j++){
    cout<<"*";
   }
   p++;
        cout<<endl;
    }
    return 0;
}
//g++ pattern.cpp  ./a.exe