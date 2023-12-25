//checks if credit card is valid or not
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 19 // including spaces for 16 digits

bool isValidCreditCard(const char *cardNumber) {
    int nDigits = strlen(cardNumber);
    int sum = 0;
    bool isSecond = false;

    for (int i = nDigits - 1; i >= 0; i--) {
        char c = cardNumber[i];
        
        if (c == ' ') continue;

        int digit = c - '0';

        if (isSecond == true) {
            digit = digit * 2;
        }

        sum += digit / 10;
        sum += digit % 10;

        isSecond = !isSecond;
    }
    return (sum % 10 == 0);
}

void main() 
{
    char cardNumber[MAX_LENGTH];

    printf("Enter the credit card number: ");
    fgets(cardNumber, MAX_LENGTH, stdin);
    cardNumber[strcspn(cardNumber, "\n")] = 0; // Remove newline character

    if (isValidCreditCard(cardNumber)) 
    {
        printf("The credit card number is valid.\n");
    } 
    else {
        printf("The credit card number is invalid.\n");
    }

    
}
