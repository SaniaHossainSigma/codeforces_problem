// g++ suspension.cpp
// ./a.exe
 #include <bits/stdc++.h>
 using namespace std;
 int main ( ){

  int tc;
  cin>>tc;
  while (tc--)
  {
   int n;
   cin>>n;
   int y,r;
   cin>>y>>r;
   int yellow=y/2;
   int total=yellow+r;
 cout<<min(total,n)<<endl;
  }
  

    return 0;
 }