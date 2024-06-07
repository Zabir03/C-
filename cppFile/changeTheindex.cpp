#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int m=sizeof(arr)/4;
    for(int i=0; i<m; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        if(arr[i]%2==0){
             cout<<arr[i]*2<<" ";
            
        }
        else{
           cout<<arr[i]+10<<" ";
        }
    }
}