#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main (){

  int tc;
  cin>>tc;

  while(tc--){
    int n;
    cin>>n;

    vector <int> vtr;
    int counteven=0;
   int countodd=0;
    for(int i=0;i<n;i++){
        int nums;
        cin>>nums;
        vtr.push_back(nums);
    }
   
    for(int i=0;i<n;i++){
     if(vtr[i]%2==0){
        counteven++;
     }else{
        countodd++;
     }
    }

    if(counteven==0 || countodd==0){
        for(int i=0;i<n;i++){
            cout<< vtr[i]  << " "
        }
        cout<<endl;
    }else{

        sort(vtr.begin(),vtr.end());
        for(int i=0;i<n;i++){
            cout<< vtr[i]  << " "
        }
        cout<<endl;
    }


  }


    return 0;
}