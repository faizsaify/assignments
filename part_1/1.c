//to calculate simple_interest
#include <stdio.h>


	float simple_interest(float rate,int time,int principal){
	return ((prinicipal*rate*time)/100);
	}
void main(){
	float rate;int time;float prinicipal;
	printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (in percent): ");
    scanf("%f", &rate);

    printf("Enter time (in mon): ");
    scanf("%f", &time);
    interest = calculateSimpleInterest(principal, rate, time);


    printf("Simple Interest: %.2f\n", interest);
}