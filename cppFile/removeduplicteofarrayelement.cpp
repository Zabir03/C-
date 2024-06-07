// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={0,1,1,2,2},i=0,j=0;
   
//     int temp[5];
//     temp[i]=arr[j];
//     for(int i=0;i<5;i++){
//         if(temp[i]==arr[j]){
//             i++;
//         }
//         else{
//             j++;
//             temp[j]=arr[i];
//             i++;
//         }

//     }
//     for(int k=0;k<=j;k++){
//         cout<<temp[k]<<" ";
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int arr[10]={ 0,0,1,1,1,2,2,3,3,4};
    int i=0,j=1,k;
    for(int k=0;k<10;k++){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }
    for(int k=0;k<i;k++){
        cout<<arr[k]<<" ";
    }
    
}