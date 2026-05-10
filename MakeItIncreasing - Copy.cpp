//  g++ MakeItIncreasing.cpp
// ./a.exe

 #include<bits/stdc++.h>
 using namespace std;

 int main ( ){
   int tc;
   cin>>tc;
   while(tc--)
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=0;
    bool impossible=false;
     for(int i=n-2;i>=0;i--)
{
    while(nums[i]>=nums[i+1]){
      ans++;
      nums[i]=nums[i]/2;
      if(nums[i]==0){
        break;
      }
    }
    if(nums[i]==0 && nums[i+1]==0){
      impossible=true;
      break;
    }

}
if(impossible){
    cout<<-1<<endl;
}else{
    cout<<ans<<endl;
}

   
   




}

       return 0;
 }