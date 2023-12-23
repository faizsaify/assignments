//to calculate sum of numbers till n
#include <stdio.h>
void main(){
	int sum=0;
	int n;
	printf("enter the number to which sum is to be calculated: %d ",n);
	for(int i=0;i<=n;i++){
		sum = sum +i;
	}
	printf("sum of numbers:%d",sum);
}
