#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter the array element : ";
    for(int i=0;i<=5;i++){
        cin>>a[i];
    }

    for(int i=0;i<=5;i++){
        
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=5-1;
    while(i<j){
            int tamp=a[i];
            a[i]=a[j];
            a[j]=tamp;
            i--;
            j++;
        }
     
     for(int i=0;i<=5;i++){
        cout<<a[i]<<" ";
    }
}