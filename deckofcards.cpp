

  #include<iostream>
  #include<vector>

  using namespace std;

  int main (  ){

  int tc;
  cin>>tc;

  while(tc--)
  {
      int n,k;
      cin>>n>>k;
      string str;
      cin>>str;

      vector <int> vtr;
      /*
      for(int i=0;i<vtr.size();i++){
        vtr[i]=i+1;
      }
      */
      vector <char> result;
        for(int i=0;i<n;i++){
        result.push_back('+');
      }
/*
      for(int i=0;i<n;i++){
        cout<< result[i]  << " ";
      }
      */




      int left=0;
      int right=n-1;

      if(result.size()==1 && k>0){
        cout<< "-" << endl;
      }
  else{
      for(int i=0;i<k;i++){
        if(str[i]=='0'){
            result[left]='-';
            left++;
            //cout<< " i "<< i << endl;
            //cout<< "left "  << left << endl;
        }else if(str[i]=='1'){
        result[right]='-';
        right--;
         // cout<< " i "<< i << endl;
        // cout<< "right "  << right  << endl;
        }else{

          result[left]='?';
            result[right]='?';
               left++;
                right--;
            //      cout<< " i "<< i << endl;
              //   cout<< "left "  << left << "right "  << right  << endl;

        }
      }


      for(auto &vl:result){
        cout<< vl << " ";
      }
  cout<< endl;
  }



  }


  return 0;
  }
