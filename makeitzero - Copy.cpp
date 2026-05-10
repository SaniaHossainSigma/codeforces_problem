#include<bits/stdc++.h>
using namespace std;

int main (  ){

     int tc;
     cin>>tc;

     while(tc--){
        int n;
        cin>>n;
        vector<int> elements;
        for(int i=0;i<n;i++){
            int nums;
            cin>>nums;
            elements.push_back(nums);
        }
        if(n%2==0){
            cout<< 2 << endl;
            cout<< 1 << " " << n <<endl;
            cout<< 1 << " " << n <<endl;
        }else{
            cout<<  4 << endl;
              cout<< 1 << " " << n-1 <<endl;
            cout<< 1 << " " << n-1 <<endl;
              cout<< n-1 << " " << n <<endl;
            cout<< n-1 << " " <<n <<endl;
        }
     }

    return 0;
}
// g++ makeitzero.cpp