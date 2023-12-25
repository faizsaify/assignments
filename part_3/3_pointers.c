//pointers to perform basic arithmetic operations
#include <stdio.h>

typedef int (*ArithmeticOperation)(int, int);
int add(int a, int b)
{
return a + b;
}
int subtract(int a, int b) 
{
return a - b;
}
int multiply(int a, int b) 
{
return a * b;
}
int divide(int a, int b) 
{
if (b != 0) {
return a / b;
} 
else 
{
printf("Error: Division by zero!\n");
return 0;
}
}
void main() 
{

	ArithmeticOperation operationPtr[4] = {add, subtract, multiply, divide};
	int num1, num2;
	char operator;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Enter arithmetic operation (+, -, *, /): ");
	scanf(" %c", &operator);
	int result;
	switch (operator) 
	{
	case '+':
		result = operationPtr[0](num1, num2);
	break;
	case '-':
		result = operationPtr[1](num1, num2);
	break;
	case '*':
		result = operationPtr[2](num1, num2);
	break;
	case '/':
		result = operationPtr[3](num1, num2);
	break;
	default:
	printf("Invalid operator!\n");
	return 1; 
	}
	// Display the result
	printf("Result: %d\n", result);
	
}
