#include<iostream>
using namespace std;
int main(){
    int a[2][2]={1,2,5,6};
    // cout<<"Enter the element of first matrix :";
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cin>>a[i][j];
    //     }
    //     cout<<endl;
    // }

    int b[2][2]={1,25,4,5};
    //  cout<<"Enter the element of second matrix :";
    //  for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cin>>a[i][j];
    //     }
    //     cout<<endl;
    // }
    int c[2][2];
    for(int k=0;k<2;k++){
        for(int m=0;m<2;m++){
            c[k][m]=a[k][m]+b[k][m];
            cout<<c[k][m]<<" ";
        }
        cout<<endl;
    }

}