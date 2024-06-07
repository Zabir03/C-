#include <iostream>
using namespace std;
int main(){
     int a[]={2,4,5,6,7,89};
     int n=sizeof(a)/4;
     int b[n];
     for(int i=0;i<n;i++){
       // int j=n-1-i;
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
     }
    
   
   


}