#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    
    int start=0, end=n-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}