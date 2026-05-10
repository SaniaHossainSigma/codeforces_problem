// g++ BalancedRound.cpp

 #include<bits/stdc++.h>
 using namespace std;

 int main (  ){

  int tc;
  cin>>tc;

  while(tc--){
    int n,k;
    cin>>n>>k;
    vector <int>  difficulties;

    for(int i=0;i<n;i++){
        int diffi;
        cin>>diffi;
        difficulties.push_back(diffi);
    }
    if(n==1){
        cout<< 0 <<endl;
    }
     else{
    sort(difficulties.begin(),difficulties.end());
    int d=0;
    int existing=0;
    for(int i=1;i<n;i++){
        if(difficulties[i]-difficulties[i-1]<=k){
           d++;

        }else{
          if(existing<d+1){
            existing=d+1;
          }
          d=0;
        }
    }
    if(d!=0 ){
        existing=max(existing,d+1);
    }
    

    cout<<n-existing <<endl; 
}
  }


    return 0;
 }
 // g++ BalancedRound.cpp

