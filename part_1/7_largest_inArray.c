 #include <stdio.h>
//find the largest element in a 1-D array and returns it
int main() {
    int array[] = {10, 45, 23, 70, 56, 89, 15, 25};
    int length = sizeof(array) / sizeof(array[0]);
    int largest = array[0]; 

    for (int i = 1; i < length; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Print the largest element
    printf("The largest element in the array is %d\n", largest);

    return 0;
}
