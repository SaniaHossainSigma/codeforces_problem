


   #include<iostream>
   using namespace std;

   int main (  ){

long long tc;
   cin>>tc;

   while(tc--){

    long long a,b;
    cin>>a>>b;

    int c=a;
    int d=b;


long long k=b;
bool possible=false;
    for(int i=k;k>=1;k--){
        if(b%k==0){
            b=b/k;
            a=a*k;
            if((a+b)%2==0){
            possible=true;
            break;
            }else{
            a=c;
            b=d;
            }
        }
    }
    /*

    if((a+b) %2==0){
        cout<<a+b<<endl;
    }else if((c+d) %2==0  ){
      cout<< c+d<<endl;
    }else{

     cout<<-1 <<endl;
    }
    */
    if(possible)
   {
       cout<< a+b<<endl;
   }else{
        cout<<-1<<endl;
   }




   }





   return 0;
   }
