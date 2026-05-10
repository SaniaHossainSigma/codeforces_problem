#include<bits/stdc++.h>
using namespace std;

int main ( ){

long long tc;
 cin >> tc;

 while (tc--) {
    long long  n;
    cin>>n;
    vector<long long> nums;
    for(int i=0;i<n;i++){
      long long num;
    cin>>num;
    nums.push_back(num);
    }
 
 vector < long long> prime={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

bool run=true;
for( long long i =0;i<prime.size() && run ;i++){
    for( long long j=0;j<nums.size();j++){
        if(nums[j]%prime[i]!=0){
       cout<<prime[i]<<endl;
       run=false;
       break;
        }

    }
}
 }
    return 0;
}