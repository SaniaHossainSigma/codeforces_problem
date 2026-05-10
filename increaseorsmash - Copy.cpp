
 #include<iostream>
 #include<vector>
 #include<map>
 using namespace std;

 int  main (  )
{
    int tc;
    cin>>tc;

    while(tc--){

        vector<int> target_vector;

        int n;
        cin>>n;

        map<int,int> mpp;

        for (int i=0;i<n;i++){
            int target;
            cin>>target;
            target_vector.push_back(target);
        }

        for(int i=0;i<target_vector.size();i++){
            mpp[target_vector[i]]++;
        }

        cout<< (mpp.size()*2)-1<< endl;


        int min_opr=0;

    }

    return 0;
}
