
  #include<iostream>
  #include<vector>
  using namespace std;
  int main (  )
{
    long long tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        vector <long long> vtr;
        for(int i=0;i<n;i++){
            long long element;
            cin>>element;
            vtr.push_back(element);
        }
        vector <long long> a(n);
        a[0]=1;
        long long prev=1;
        for(int i=1;i<n;i++){
            long long idx=i+1;
            long long diff=vtr[i]-vtr[i-1];
            if(idx==diff){
                a[i]=prev+1;
                prev++;
            }else{
              a[i]=a[i-diff];
            }
        }
  for(auto &vl:a){
    cout<< vl << " ";
  }
  cout<<endl;
    }
    return 0;
}

