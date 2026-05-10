//g++ notdividing.cpp
// ./a.exe
#include<bits/stdc++.h>
using namespace std;
int main ( ){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==1){
                nums[i]++;
            }
        }
      for(int i=1;i<n;i++){
        
        if(nums[i]%nums[i-1]==0){
            nums[i]++;
        }
      }
      for(auto &vl:nums){
        cout<<vl<<" ";
      }
      
   cout<<endl;



    }
    return 0;
}