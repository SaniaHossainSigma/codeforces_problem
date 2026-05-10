
  #include<iostream>
  #include<vector>
  using namespace std;


  int main ( )
{

    vector <int> vtr={1,2,3,4,5,6,7};
  int n=7;
    vector <int> tmp(3);

    for(int i=0;i<3;i++){
        tmp[i]=vtr[i];
    }

    int d=3;
  //   0 1 2 3 4 5 6
    // 1 2 3 4 5 6 7
    // 4 5 6 7 5 6 7
 //    0 1 2 3 4 5 6

   for(int i=d;i<n;i++){

    vtr[i-d]=vtr[i];

   }

   for(auto &vl:vtr){
    cout<<vl <<" ";
   }
   cout<<endl;
   int idx=0;
   for(int i=n-d;i<n;i++)
  {
      vtr[i]=tmp[idx];
      idx++;
  }
   for(auto &v:vtr){
    cout<<v <<" ";
   }
   cout<<endl;

    return 0;

}
