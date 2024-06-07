#include<iostream>
using namespace std;
int main(){
    int a[4][3];
    cout<<"Enter the element of martix : ";
    for(int k=0;k<4;k++){
        for(int m=0;m<3;m++){
            cin>>a[k][m];
        }
    }
    int product=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            product=product*a[i][j];
        }
    }
    cout<<product;
}