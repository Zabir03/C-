
#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,1,2,5,7};
    int sum=0;
   
   
    for(int i=0; i<=6; i++){
        sum += arr[i];
    }
    cout<<sum;
    
}