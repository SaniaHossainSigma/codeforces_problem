
  #include<iostream>
  #include<vector>
  using namespace std;

  int main (  )
{
    int tc;
    cin>>tc;

    while(tc--){
        vector <int> vtr;
        for(int i=0;i<4;i++){
          int axis_distance;
          cin>>axis_distance;


          vtr.push_back(axis_distance);

        }

        bool possible=true;
          for(int i=0;i<3;i++){
        if(vtr[i]!=vtr[i+1]){
            possible=false;
            break;
        }


    }

    if(!possible){
        cout<< "NO"<<endl;
    }else{
       cout<< "YES"<<endl;
    }

    }
    return 0;
}
