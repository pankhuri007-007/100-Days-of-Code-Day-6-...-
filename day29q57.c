// Day 29
// Q57 (Arrays (1D))
// Find the sum of array elements.

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("%d", sum);

    return 0;
}