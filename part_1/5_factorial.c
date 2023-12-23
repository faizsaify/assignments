//calculate the factorial of a number
#include <stdio.h>
int main() {

    int number;
    long result;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long fact = 1;
        for (int i = 1; i <= n; i++) {
        fact *= i;
    }

        printf("Factorial of %d is %ld\n", number, result);
    }

    return 0;
}
