#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 2, 12, 15, 8, 7, 11};
    int n = sizeof(arr) / sizeof(int);
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr2[i] - arr[0];
        cout<<arr2[i];
        if (arr2[i] > 0)
        {
            cout << "Profit of : " << arr2[i] << " ";
        }
        else
        {
            cout << "Loss of : " << arr2[i] << " ";
        }
    }
}
