

  #include<bits/stdc++.h>
  using namespace std;

  int main(  ){
  int tc;
  cin>>tc;
   while(tc--){

       int r,m;
       cin>>r>>m;




        int   prevpos=0;
        int prevM=0;
        int maximum=0;
       // int total=0;

        for (int i=0;i<r;i++){

                int x,y;
                cin>>x>>y;

            int duration=x-prevM;
            cout<<"duration " <<  duration << endl;
            if(prevpos==y){
                maximum += duration-(duration%2);

            }else{


              maximum += duration-(1-duration%2);

            }

          prevpos=y;
            prevM=x;

         cout<< "Maximum "<< maximum << endl;

        }

               cout<< maximum << endl;
            maximum+=m-prevM;


            cout<< "final " << maximum << endl;
      }







  return 0;
  }
