
  #include<iostream>
  #include<vector>
  using namespace std;

  int main (  )
{
    int tc;
    cin>>tc;

    while(tc--){

        int n;
        cin>>n;


        string  str;
        cin>>str;

        vector <int> ans;

        int countofzero=0;

        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                    ans.push_back(i+1);
                countofzero++;
            }
        }

        cout<<countofzero << endl;
        for(auto &vl:ans){
            cout<< vl << " ";
        }
        cout<< endl;

    }

    return 0;
}
