//to convert temp
#include <stdio.h>
float cel_to_far(float celcius){
	return (celcius * (9/5) + 32);
}
float far_to_cel(float farenhiet){
	return (celcius * (5/9) + 32);
}
void main(){
	float celcius;float farenhiet;
	printf("Enter temperature in celcius: ");
	scanf("%f",celcius);
	printf("entered temperaturein farenhiet: %f",cel_to_far(celcius))
	printf('Enter temperature in farenhiet: ');
	scanf("%f",farenhiet);
	printf("entered temperaturein farenhiet: %f",far_to_cel(farenhiet))

}
