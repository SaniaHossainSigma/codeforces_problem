// g++ oddqueries.cpp
//./a.exe
#include<bits/stdc++.h>
using namespace std;
int main ( ){
   int tc;
   cin>>tc;
   while ((tc--))
   {
   int n,q;
   cin>>n>>q;
   vector<int> nums(n);
   int total=0;
   vector <int> prefix(n+1,0);
   for(int i=0;i<n;i++){
    cin>>nums[i];
    total +=nums[i];
   }
   for(int i=1;i<n+1;i++){
    prefix[i]=prefix[i-1]+nums[i-1];
   }
   while(q--){
    int l,r,k;
    cin>>l>>r>>k;
    int addsubtotal=(r-l+1)*k;
    int removingsubtotal=prefix[r]-prefix[l-1];
    if((total+addsubtotal-removingsubtotal)%2 !=0){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
   }
   



   }
    return 0;
   }


   
