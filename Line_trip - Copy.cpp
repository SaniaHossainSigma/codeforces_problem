#include<iostream>
#include<vector>
using namespace std;
int main (  ){
    int tc;
    cin>>tc;
    while(tc--){
         int n,x;
        cin>>n>>x;

        vector <int> nums;
        for(int i=0;i<n;i++){
            int gas_station;
            cin>>gas_station;
            nums.push_back(gas_station);
        }
        int maximum_gas=nums[0]-0;
        for(int i=0;i<n-1;i++){
            int diff=nums[i+1]-nums[i];
           
            if(diff>maximum_gas){
                maximum_gas=diff;
            }
    //  g++ Line_trip.cpp
        }
       

        int last=(x-nums[n-1])*2;

        if(last>maximum_gas){
            cout<< last <<endl;
        }else{

            cout<< maximum_gas<<endl;
        }





    }


     return 0;
}