

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){

        int n;
        cin>>n;

        vector<int> vtr;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vtr.push_back(x);
        }
        int maxvalue=vtr[0];

        for(int i=1;i<n;i++){

            if(vtr[i]>maxvalue){
                maxvalue=vtr[i];
            }
        }

        cout<< maxvalue << endl;

    }

    return 0;
}
