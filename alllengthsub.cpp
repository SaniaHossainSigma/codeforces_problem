

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

        vector <int> vtr;

        for (int i=0;i<n;i++){
            int k;
            cin>>k;
            vtr.push_back(k);
        }
     int l=0;
     int r=n-1;
     int cur=1;
     bool check=true;
     while(cur<=n){

        if(vtr[l]==cur){
            l++;
            cur++;
            continue;
        }
        if( vtr[r]==cur){
            r--;
            cur++;
            continue;
        }

        check=false;
        break;
     }

     if(check){
        cout<<"YES"<<endl;
     }else{

     cout<<"NO"<< endl;
     }





}
  return 0;
}
