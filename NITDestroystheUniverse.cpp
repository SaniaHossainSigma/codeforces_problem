//  g++ NITDestroystheUniverse.cpp
// ./a.exe
 #include<bits/stdc++.h>
 using namespace std;
int main ( ){
int tc;
cin>>tc;
while(tc--){
    int n;
    cin>>n;
    vector<int> universe(n);
    int countofzero=0;
    for(int i=0;i<n;i++){
        cin>>universe[i];
        if(universe[i]==0){
            countofzero++;
        }
    }
    if(countofzero==n){
        cout<<0<<endl;
    }
    else{
    // find 1st  non zero and last non zero
    int left=0,right=n-1;
    while(universe[left]==0){
        left++;
    }
    while (universe[right]==0)
    {
      right--;
    }
    bool onesegment=true;
    for(int i=left;i<=right;i++){
        if(universe[i]==0){
            onesegment=false;
            break;
        }
    }
    if(onesegment){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
    
    

    }
}

    return 0;
}