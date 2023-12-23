#include <stdio.h>
//calculate sum of elements of array
int main() {
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    // Loop through the array to calculate the sum
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
