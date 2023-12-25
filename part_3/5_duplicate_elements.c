//count total duplicate elements in array
#include <stdio.h>

void findDuplicates(int arr[], int length) {
    int i, j;
    int count = 0;

    printf("Duplicate elements and their indices:\n");

for (i = 0; i < length - 1; i++) {
 for (j = i + 1; j < length; j++) {
    if (arr[i] == arr[j]) 
    {
	printf("Element %d found at indices %d and %d\n", arr[i], i, j);
         count++;
     break;
     }
  }
  }

  printf("Total number of duplicate elements: %d\n", count);
}

void main() 
{
int arr[] = {1, 2, 3, 2, 5, 6, 5, 5, 8};
int length = sizeof(arr) / sizeof(arr[0]);

findDuplicates(arr, length);

return 0;
}
