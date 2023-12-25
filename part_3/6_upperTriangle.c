//print upper triangle of given matrix
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
 {
char num1[20], num2[20];

sprintf(num1, "%d%d", *(int *)a, *(int *)b);
sprintf(num2, "%d%d", *(int *)b, *(int *)a);

return strcmp(num2, num1); 
}

void printLargest(int arr[], int n) {
qsort(arr, n, sizeof(int), compare);

for (int i = 0; i < n; i++) 
{
    printf("%d", arr[i]);
    }
printf("\n");
}

void main() {
  int A[] = {944, 9, 0, 45};
 int n = sizeof(A) / sizeof(A[0]);

 printLargest(A, n);

}
