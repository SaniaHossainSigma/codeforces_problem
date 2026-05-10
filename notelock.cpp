
  #include<iostream>
  #include<vector>
  using namespace std;

  int main ()
{
    int tc;
    cin>>tc;

    while(tc--){

        int n,k;
        cin>>n>>k;

        string str;
        cin>>str;
        int protect=0;

        vector<int> idx;
    int countofone=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
            countofone++;
            idx.push_back(i);
            }
        }
  /*cout<< " vtr  :  ";
        for(auto vl :idx){
            cout<< vl << " ";
        }*/
       // cout<<endl;
        if(countofone==0){
            cout<< 0 << endl;
        }else {
            protect=1;
        bool prevproc=false;
     // cout<< "position ";
        for(int i=1;i<idx.size();i++){

            int pos=idx[i]-idx[i-1];

        // cout<< pos << " ";
            if(pos>k-1){
                protect++;
            }

        }
    //  cout<<endl;
        cout<< protect <<endl;



        }
    }

    return 0;
}
