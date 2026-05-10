#include<bits/stdc++.h>
using namespace  std;

int main ( ){

long long  tc;
cin>>tc;

while(tc--){

   long long  a,b,n;
    cin>>a>>b>>n;

    vector <long long > tools;

    for(long long  i=0;i<n;i++){
      long long  t;
        cin>>t;
        tools.push_back(t);
    }
long long max_time=b;

    for(long long  i=0;i<n;i++){
       max_time +=min(tools[i],a-1);
    }

    cout<< max_time<<endl;
// g++ JellyfishAndUndertale.cpp
}


    return 0;
}