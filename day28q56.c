//  Q56 (Arrays (1D))
// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Print array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
