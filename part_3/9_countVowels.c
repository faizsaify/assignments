//count number of vowels
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LENGTH 1000

bool isvowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


int countvowelpair(const char *str) {
    int count = 0;
    while (*str && *(str + 1)) {
        if (isvowel(*str) && isvowel(*(str + 1))) {
            count++;
        }
        str++;
    }
    return count;
}

void main() {
    char text[MAX_LENGTH];

    printf("Enter a line of text:\n");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = 0;
    int pairs = countvowelpair(text);
    printf("number of occurrences of any two vowels in succession: %d\n", pairs);


}
