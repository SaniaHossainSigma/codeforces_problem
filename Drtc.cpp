
  #include<iostream>
  using namespace std;

  int main ( ){

  int tc;
  cin>>tc;

  while(tc--){

    int n;
    cin>>n;


     string str;
     cin>>str;
        int countofone=0;

     for(int i=0;i<n;i++){

        if(str[i]=='1'){
            str[i]='0';
        }else{
            str[i]='1';
        }

        for(int i=0;i<n;i++){
            if(str[i]=='1'){
            countofone++;
        }




        }
       if(str[i]=='1'){
            str[i]='0';
        }else{
            str[i]='1';
        }



     }

     cout<< countofone << endl;
  }





  return 0;
  }
