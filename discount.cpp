

 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 int main ( ){


 int tc;
 cin>>tc;

 while(tc--){

    int p,v;
    cin>>p>>v;

    vector<long long> product;
    vector<long long > voucher;

    long long maxcost=0;

    for (int i=0;i<p;i++){
        int x;
        cin>>x;
        product.push_back(x);
        maxcost +=x;
    }
     for (int i=0;i<v;i++){
        int y;
        cin>>y;
        voucher.push_back(y);
    }

   sort(voucher.begin(),voucher.end());
  sort(product.begin(),product.end(),greater <int> ());
/*
  cout<< " voucher   ";
  for (int i=0;i<voucher.size();i++){

    cout<< voucher[i]<< "  ";
  }
  cout<< endl;


   cout<< " product   ";
  for (int i=0;i<product.size();i++){

    cout<< product[i]<< "  ";
  }
  cout<< endl;

  */
  vector<long long> vtr;

  long long prev=0;
  for (int i=0;i<voucher.size();i++){

    long long x=voucher[i];
    long long newindex=prev+x;
    vtr.push_back(newindex);
    prev +=x;

  }
/*
   cout<< " index   ";
  for (int i=0;i<vtr.size();i++){

    cout<< vtr[i]<< "  ";
  }
  cout<< endl;
  */

  for(int i=0;i<vtr.size();i++){
    long long  p=vtr[i]-1;
    if(p<product.size()){
    maxcost -=product[p];
    }
  }


  cout<< maxcost <<endl;







    }







 return 0;
 }
