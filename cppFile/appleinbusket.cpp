#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[6];
    cout << "Enter the array element :";
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Array before sorting :";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n);
    cout << "Array after sorting : ";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}
