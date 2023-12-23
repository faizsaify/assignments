#include <stdio.h>
#include <limits.h> // For LONG_MAX and LONG_MIN
//find average, max and min elements from an array of n long integers
void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    long array[n];
    long max=LONG_MIN;
   long min=LONG_MAX;
    long sum=0;

    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++) {
        scanf("%ld",&array[i]);
        sum+=array[i];

        if (array[i]>max) {
            max=array[i];
        }

        if (array[i]<min) {
            min=array[i];
        }
    }

    double average=(double)sum / n;

    printf("Average: %.2f\n", average);
    printf("Maximum: %ld\n", max);
    printf("Minimum: %ld\n", min);

}
