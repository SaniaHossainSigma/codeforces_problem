// g++ comparisonString.cpp

#include<bits/stdc++.h>
using namespace std;

int main ( ){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int counting=1;
        int maxcounting=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                counting++;
            }else{
               maxcounting=max(counting,maxcounting);
                counting=1;
            }
        } 
         maxcounting=max(maxcounting,counting);
        
        cout<<maxcounting+1<<endl;
    }

    return 0;
}