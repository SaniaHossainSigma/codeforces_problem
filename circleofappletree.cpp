


  #include<iostream>
  #include<vector>
  #include<algorithm>
  using namespace std;

  int main ( )
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;
        vector<int> b;
        for(int i=0;i<n;i++){
            int b_app;
            cin>>b_app;
            b.push_back(b_app);

        }

        sort(b.begin(),b.end()) ;
        int duplicate=0;
        for(int i=0;i<b.size()-1;i++){
            if(b[i]==b[i+1]){
                duplicate++;
            }
        }

        cout<< n-duplicate <<endl;

    }




    return 0;
}
