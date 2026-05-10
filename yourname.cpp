#include<iostream>
using namespace std;

int main(){
 
     int tc;
     cin>>tc;

     while(tc--){
   
      int n;
      cin>>n;

      string str1,str2;
      cin>>str1>>str2;

      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
        if(str1[i]>str1[i+1]){
            swap(str1[i],str1[i+1]);
        }
    }
      }


      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
        if(str2[i]>str2[i+1]){
            swap(str2[i],str2[i+1]);
        }
    }
      }
   bool can=true;
      for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]){
         can=false;
        }
      }
      if(true){
        cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }


     }




    return 0;
}