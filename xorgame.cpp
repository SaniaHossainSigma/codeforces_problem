
 #include<bits/stdc++.h>
 using namespace std;
 int main( ){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector <int> a;
        vector <int> b;
        int countofone=0;
        int counta=0,countb=0;
        for(int i=0;i<n;i++){
            int nums;
            cin>>nums;
            if(nums%2 !=0){
                counta++;
                countofone++;
            }
            a.push_back(nums);
        }
        for(int i=0;i<n;i++){
            int nums;
            cin>>nums;
            if(nums%2 !=0){
                countb++;
                countofone++;
            }
            b.push_back(nums);
        }

        if( countofone%2==0){
            cout<< "Tie"<<endl;
        }else if (counta%2 !=0){
                cout<<"Ajisai"<<endl;
            }else{
            // bool aji=false;
            int idx=-1;
             for(int i=n-1;i>=0;i--){
                if(a[i]!=b[i]){
                    // if(i%2==0 || i==0){
                    //     aji=true;
                    //       cout<<"Ajisai"<<endl;
                    // }
                    // break;
                    idx=i;
                    break;
                }
             }
            //  if(!aji){
            //     cout<<"Mai"<<endl;
            //  }

            if( idx!=-1 && idx%2 ==0 ){
            
                    cout<<"Ajisai"<<endl;
                
            }else{
                  cout<<"Mai"<<endl;
            }
            }
        }
           




        
        return 0;

        
    }
    
 // g++ xorgame.cpp