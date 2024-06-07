#include <iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter array element : ";
    for(int i=0;i<=5;i++){
        cin>>arr[i];

    }
    for(int i=0;i<=5;i++){
        cout<<arr[i]*2<<" ";
    }
}
// #include <iostream>
// using namespace std;

// void double_of_previous(int n) {
//     // Initialize previous number to 0
//     int previous = 0;
//     for (int i = 0; i < n; ++i) {
//         // Double the previous number
//         int doubleNum = previous * 2;
//         // Print the result
//         cout << doubleNum << endl;
//         // Update the previous number for the next iteration
//         previous = doubleNum;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of doubles you want to find: ";
//     cin >> n;
//     double_of_previous(n);
//     return 0;
// }