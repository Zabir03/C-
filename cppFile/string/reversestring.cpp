#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "This is pen";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s;
}