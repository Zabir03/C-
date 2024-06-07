#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,34,6,8,1,3};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    int smn=INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mn){
            smn=min(smn,arr[i]);
        }
    }
    cout<<smn;
}