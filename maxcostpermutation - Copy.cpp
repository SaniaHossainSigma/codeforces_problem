


   #include<iostream>
   #include<vector>
   #include<set>
   using namespace std;

   int main (  ){

   int tc;
   cin>>tc;

   while(tc--){

    int n;
    cin>>n;

    set<int> s;

    for (int i=0;i<n;i++){
        s.insert(i+1);
    }
     vector<int> cost;

     for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x){
            s.erase(x);
        }
        cost.push_back(x);
     }
     /*
     cout<< "set  of missing values  ";
     for (int y:s)
{

    cout<< y << " ";
}

cout<< endl;
*/
/*
cout<< " vector of cost";
for (auto &vl:cost){
    cout<< vl << "  ";
}
cout<< endl;

*/
for (auto &vl:cost)
{

    if(vl==0){
     auto itr=s.end();itr--;
      vl=*itr;
      s.erase(itr);
    }
}
bool found=true;

    for (int i=0;i<n-1;i++){
        if(cost[i]>cost[i+1]){
            found=false;
            break;
        }
    }
    if(found){
        cout<< 0 << endl;
    }else{

/*
cout<< " vector of cost";
for(auto &vl:cost){
    cout<<  vl << " ";
}
cout<< endl;
*/

int l=0;
int r=0;

for (int i=0;i<n;i++){
    if(cost[i]!=i+1){
        l=i;
        break;
    }
}
for (int i=n-1;i>=0;i--){
     if(cost[i]!=i+1){
       r=i;
        break;
    }
}
//cout<< " output : ";
cout<< r-l+1 << endl;


    }


   }






   return 0;
   }
