#include <stdio.h>
//swap numbers
void swap_w_ThirdVariable(int *a, int *b) {
 int temp=*a;
*a=*b;
*b=temp;
}

void swap_wo_ThirdVariable(int *a, int *b) {
*a=*a + *b;
*b=*a - *b;
*a=*a - *b;
}

void main() {
int x=10,y=20;

printf("Original values:\nx= %d, y= %d\n", x, y);

swap_w_ThirdVariable(&x, &y);
printf("After swap with third variable:\nx= %d, y= %d\n", x, y);

swap_wo_ThirdVariable(&x, &y);
printf("After swap without third variable:\nx= %d, y= %d\n", x, y);

 

    
}
