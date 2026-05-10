// // g++ yookoito.cpp
// #include<bits/stdc++.h>
// using  namespace std;

// int main ( ){

//     int tc;
//     cin>>tc;

//     while(tc--){
//         int n;
//         cin>>n;
//         vector <int> a;
//         int blankspace=0;
//         int blankspaceidx=1;
//         for(int i=0;i<n;i++){
//             int nums;
//             cin>>nums;
//             if(nums==-1){
//               blankspace++;
//               blankspaceidx=i;
//             }
//             a.push_back(nums);
//         }

//         if(blankspace==1 && n==2){
//         if(blankspaceidx==1){
//             a[blankspaceidx]=a[0];
//         }
//         else{
//               a[blankspaceidx]=a[1];
//         }

//         }
//         /////////////////////////////////////

//         else if(blankspace==1 && n>2){

//              int total=0;
//         for(int i=0;i<blankspaceidx-1;i++){
//           int x=a[i]-a[i-1];
//           total +=x;
//         }
//       if(total!=0){
//         a[blankspaceidx]=total;
//     }else{
//          a[blankspaceidx]=0;
//     }
    
// }
//   else{
//         /////////////////////////////////
//         // for(int i=0;i<n;i++){
//         //     if(a[i]==-1){
//         //         a[i]=0;
//         //         break;
//         //     }
//         // }
//         int total=0;
//         for(int i=0;i<n;i++){
//          if(a[i]!=-1){
//             total+=a[i];
//          }
//         }
//       if(total!=0){
//         for(int i=n-1;i>=0;i--){
//             if(a[i]==-1){
//                a[i]=total;
//                cout<< "enter the loop "<<endl;
//                break;
//             }
//         }
//       }
    
//     for(int i=0;i<n;i++){
//         if(a[i]==-1){
//             a[i]=0;
//         }
//     }
// }///////////////////

//     int minnum=0;

//     for(int i=1;i<n;i++){
//         int bnums=a[i]-a[i-1];
//         minnum +=bnums;
//     }
//     cout<< abs(minnum) <<endl;
//     for(int i=0;i<n;i++){
//         cout<< a[i] << " ";
//     }
//     cout<< endl;
//     }

//     return 0;
// }

 #include<bits/stdc++.h>
 using namespace std;

 int main( ){
int tc;
cin>>tc;
while(tc--){
  int n;
  cin>>n;
  vector <int> a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  if(a[0]==-1){
  a[0]=a[n-1];
}
if(a[n-1]==-1){
  a[n-1]=a[0];
}
for(auto &vl:a){
  if(vl==-1){
    vl=0;
  }
}
int min_vl=0;
for(int i=1;i<n;i++){
  min_vl +=a[i]-a[i-1];
}
cout<<abs(min_vl)<<endl;
for(auto &v:a){
  cout<<v<<" ";
}
cout<<endl;

}


// g++ yookoito.cpp


  return 0;
 }
