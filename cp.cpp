#include<iostream>
#include<vector>
using namespace std;

int main ( ){
 int tc;
 cin>>tc;

 while(tc--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector <int> vtr;
    vtr.push_back(a);
    vtr.push_back(b);
    vtr.push_back(c);
    vtr.push_back(d);
    bool square=true;
    for(int i=0;i<vtr.size()-1;i++){
        if(vtr[i]!=vtr[i+1]){
            square=false;
            break;
        }
    }
    if(square){
        cout<< "YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

 }





    return 0;
}
