#include<bits/stdc++.h>
using namespace std;

int  main( ){

      int tc;
      cin>>tc;

      while(tc--){
      
        int p,q,xk,yk,xq,yq;
        cin>>p>>q>>xk>>yk>>xq>>yq;

        vector <pair<int,int>> king;
        king.push_back({xk+p,yk+q});
         king.push_back({xk+p,yk-q});
          king.push_back({xk-p,yk+q});
           king.push_back({xk-p,yk-q});
        king.push_back({xk+q,yk+p});
         king.push_back({xk+q,yk-p});
          king.push_back({xk-q,yk+p});
           king.push_back({xk-q,yk-p});

           vector <pair<int,int>> queen;
          queen.push_back({xq+p,yq+q});
         queen.push_back({xq+p,yq-q});
          queen.push_back({xq-p,yq+q});
           queen.push_back({xq-p,yq-q});
        queen.push_back({xq+q,yq+p});
         queen.push_back({xq+q,yq-p});
          queen.push_back({xq-q,yq+p});
           queen.push_back({xq-q,yq-p});

           set<pair<int,int>> pos;

           for(int i=0;i<king.size();i++ ){
            for(int j=0;j<queen.size();j++){
                if(king[i]==queen[j]){
                    pos.insert({king[i],queen[j]});
                }
            }
           }

           cout<<pos.size()<<endl;
    
        }
  // g++ forked.cpp
    return 0;
}