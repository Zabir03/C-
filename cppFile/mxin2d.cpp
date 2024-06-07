#include <iostream>
using namespace std;
int main()
{
    int arr[3][2] ;
    cout<<"Enter the element of matrix : ";
    for(int k=0; k < 3; k++){
        for(int m=0; m<2; m++){
            cin>>arr[k][m];
        }
    }
    int mx = INT8_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mx = max(mx, arr[i][j]);
        }
       
    }
     cout << mx << " ";
}