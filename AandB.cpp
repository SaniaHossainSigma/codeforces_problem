
  #include<iostream>
  #include<vector>
  using namespace std;

  int main (  ){

  int tc;
  cin>>tc;


  while(tc--)
  {
      int n;
      cin>>n;

      vector<char> c;

      for (int i=0;i<n;i++){
        char x;
        cin>>x;
        c.push_back(x);
      }


      int leftA=0;
      int rightA=0;
        for (int i=0;i<n;i++){
        if(c[i]=='a'){
            leftA=i;
            break;
        }
      }

        for (int i=n-1;i>=0;i--){
        if(c[i]=='a'){
            rightA=i;
            break;
        }
      }

      int countB=0;


      for (int i=leftA+1;i<rightA;i++){
        if(c[i]=='b'){
            countB++;
        }
      }
      if(countB==0){
        cout<< 0 << endl;
      }else{


      //////
      int left=0;
      int right=0;
      for (int i=0;i<n;i++){
        if(c[i]=='b'){
            left=i;
            break;
        }
      }

        for (int i=n-1;i>=0;i--){
        if(c[i]=='b'){
            right=i;
            break;
        }
      }
      int countA=0;

      if(left==right){
        cout<< 0 << endl;
      }
      else{
      for (int i=left+1;i<right;i++)
      {
          if(c[i]=='a'){
          countA++;
      }}
       cout<< countA << endl;
      }
      }
  }
  return 0;
  }
