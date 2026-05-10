

  #include<iostream>
  #include<vector>
  #include<map>
  using namespace std;

  int main (  )
{

    int tc;
    cin>>tc;

    while(tc--){

        int n;
        cin>>n;
        vector<int> v;

        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        map<int,int> mpp;

        for (int i=0;i<n;i++)
        {
            mpp[v[i]]++;
        }

         vector <int> frq;

        for (auto itr:mpp){
           // cout<< itr.first << " "<< itr.second << endl;
            frq.push_back(itr.second);
        }

      //  cout<< "frequency vector "<< endl;
      /*
        for (auto &vl:frq){
            cout<< vl << "  ";
        }
    */
        int max_length=0;
        for(int i=0;i<frq.size();i++){
            int p=frq[i];
            int length=0;
            for (int j=0;j<frq.size();j++){
                if(frq[j]>=p){
                    length +=p;
                }
            }
            if(length>max_length){
                max_length=length;
            }


        }
//cout<< endl;
 // cout<< "maxlength   "<< max_length << endl;
 cout<< max_length << endl;



    }
    return 0;
}
