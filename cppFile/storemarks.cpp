#include<iostream>
using namespace std;


int main(){
    int a[4][2]={{34,4},{12,34},{1,50},{3,49}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
         cout<<endl;
    }
}
