#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the array element :"<<" ";
    for(int i=0;i<=10;i++){
        cin>>arr[i];
    }
    int mx=INT8_MIN;
    for(int i=0;i<=10;i++){
        mx=max(mx,arr[i]);
    }
    int smx=INT8_MIN;
    for(int i=0;i<=10;i++){
        if(arr[i]!=mx){
            smx=max(smx,arr[i]);
        }
    }
    cout<<smx;
}