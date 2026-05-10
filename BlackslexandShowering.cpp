// g++ BlackslexandShowering.cpp
// ./a.exe
#include<bits/stdc++.h>
using namespace std;
int main ( ){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> elevator(n);
        for(int i=0;i<n;i++){
            cin>>elevator[i];
        }
        int maximum=elevator[0];
     
        for(int i=1;i<n;i++){
            if(elevator[i]>maximum){
                maximum=elevator[i];
             
            }
        }

       for(auto &vl:elevator){
        if(vl==maximum){

        elevator.erase(remove(elevator.begin(),elevator.end(),vl),elevator.end());
        }
       }
       if(elevator.size()==1){
        cout<< 0 <<endl;
       }else{
        int sum=0;

        for(int i=1;i<elevator.size();i++){
         sum +=abs(elevator[i]-elevator[i-1]);
        }
        cout<< sum <<endl;
    }}

    return 0;
}