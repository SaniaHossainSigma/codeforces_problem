

//reversed an array using recursion  with one variable

#include<iostream>

using namespace std;


 void reverseArray ( int arr[], int beg){

int n = sizeof(arr)/sizeof(arr[0]);
//best case
if(beg>=n/2){
    return;
}

swap(arr[beg],arr[n-1-beg]);
reverseArray(arr,beg++);



}


int main (  ){


int arr[]={1,2,3,4,5};


reverseArray(arr,0);
int n = sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<n;i++){
    cout<< arr[i]<< "  ";
}
cout<< endl;






return 0;
}
