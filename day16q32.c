//Q32 (Loops without Arrays/Strings)
//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;

    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (original == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}