//Q40 (Loops without Arrays/Strings)
//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main()
{
    int n, digit, ans = 0, place = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        ans = ans + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%04d", ans);

    return 0;
}