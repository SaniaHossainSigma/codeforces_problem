// g++ split.cpp
#include<bits/stdc++.h>
using namespace std;
int main ( ){
  int tc;
  cin>>tc;

  while(tc--){
    int n;
    cin>>n;
   int m=2*n;
    vector <int> nums;
    map<int,int>mpp;
   
    set<int> s;
    for(int i=0;i<=m;i++){
      int x;
      cin>>x;
      nums.push_back(x);
      mpp[x]++;
      set.insert(x);
     
    }
   if(s.size()==n){
    int total=n;
    for(auto itr:mpp){
        if((itr.second-1)%2!=0){

        }
    }
   }
    
    }
   
  

    return 0;
}