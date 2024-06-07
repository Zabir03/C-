#include<iostream>
using namespace std;
int main(){
    int a[3][2];
    cout<<"Enter the element of the martix : ";
    for(int k=0; k<3; k++){
        for(int m=0; m<2; m++){
            cin>>a[k][m];
        }
        
    }
    int mn=a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            mn=min(mn,a[i][j]);
        }
    }
    cout<<mn;
}