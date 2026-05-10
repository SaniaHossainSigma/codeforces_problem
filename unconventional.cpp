

 #include<iostream>
 #include<vector>
 using namespace std;

 int main(  ){


int tc;
cin>>tc;

while(tc--){

    int n,m;

    cin>>n>>m;

    vector<int> vtr;

    for(int i=0;i<n;i++)
{

    int x;
    cin>>x;
    vtr.push_back(x);
}
int mini=n;
int found=false;
for (int i=0;i<=n;i++){

    for (int j=0;j<n;j++){

        if(i==vtr[j]){
            found=true;
            break;
        }
    }
    if(!found){
         mini=i;
    }

}

if(m==mini){
    cout<< 0 << endl;
}else{
int counting=0;
for(int i=0;i<n;i++){

    if(vtr[i]==m){
        counting++;
    }
}

cout<< counting << endl;
}





}









 return 0;
 }
