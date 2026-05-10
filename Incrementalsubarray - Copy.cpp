

  #include<iostream>
  #include<vector>
  using namespace std;

  int main ( )
{
    int tc;
    cin>>tc;

    while(tc--){
      int  n,b;
      cin>>n>>b;


     vector<int> barray;

     for (int i=0;i<b;i++){
       int x;
     cin>>x;
        barray.push_back(x);
     }
     /*

     bool sorted=true;

    for (int i=0;i<b-1;i++){
        if(barray[i]>=barray[i+1]){
            sorted=false;
            break;
        }
    }
    */
    bool  divarray=false;

    for (int i=1;i<barray.size();i++){
        if(barray[i]==1){
            divarray=true;
        }
    }
    if (divarray){
        cout<<1 << endl;
    }else{

     cout<< n-barray[b-1]+1 << endl;

    }


/*
     if(sorted){
        cout<<n-barray[b-1]+1 << endl;
    }else{
    cout<< 1 << endl;
    }

    */






    }

    return 0;
}
