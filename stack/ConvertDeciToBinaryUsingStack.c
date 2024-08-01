
// #include <iostream>
// #include <stack>

// using namespace std;

// void decimalToBinary(int decimal) {
//     stack<int> binaryStack;

//     while (decimal > 0) {
//         int remainder = decimal % 2;
//         binaryStack.push(remainder);
//         decimal = decimal / 2;
//     }

//     cout << "Binary Number: ";
//     while (!binaryStack.empty()) {
//         cout << binaryStack.top();
//         binaryStack.pop();
//     }
//     cout << endl;
// }

// int main() {
//     int decimal;
//     cout << "Enter a decimal number: ";
//     cin >> decimal;

//     decimalToBinary(decimal);

//     return 0;
// }

#include<stdio.h>
#include<math.h>
int top=-1,size;
void push(int *s,int x){
    top=top+1;
    s[top]=x;

}
main(){
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);
    int size=((int)log2(n))+1;
    printf("%d",size);
    int s[size];
    while(n>0){
        push(s,n%2);
        n=n/2;
    }
    
}