#include<stdio.h>
int main() {
    int arr[] = {8, 7, 10, 6, 15, 11, 3};
    const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        int firstElement = arr[i];
        printf("Comparing with stock value on %s (%d)\n", days[i], firstElement);
        for(int j = i + 1; j < size; j++) {
            if (arr[j] > firstElement) {
                printf("Stock on %s (%d) is greater than the stock on %s by %d\n", days[j], arr[j], days[i], arr[j] - firstElement);
            } else if (arr[j] < firstElement) {
                printf("Stock on %s (%d) is less than the stock on %s by %d\n", days[j], arr[j], days[i], firstElement - arr[j]);
            } else {
                printf("Stock on %s (%d) is equal to the stock on %s\n", days[j], arr[j], days[i]);
            }
        }
        printf("\n");
    }

    return 0;
}