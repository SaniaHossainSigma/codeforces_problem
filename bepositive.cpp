
  #include<iostream>
  #include<vector>
  #include<algorithm>
  using namespace std;
  int main (  ){
  int  tc;
  cin>> tc;
  while(tc--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
            int p;
    cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());

    // 0 1 2 4 5
    // 1 2 3
    int mex=0;

    for(int i=0;i<n;i++){
        if(mex==v[i]){
            mex++;
            continue;
        }
    }
    cout<< mex <<endl;







    }
  return 0;
  }

