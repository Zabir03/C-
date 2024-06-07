#include<iostream>
using namespace std;
int main(){
    int arr[]={9,3,0,2,5,7,8};
    int n=sizeof(arr)/sizeof(int);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            arr[count++]=arr[i];
        }
    }
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
}