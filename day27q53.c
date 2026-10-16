   //Day 27
  //Q53 (Nested Loops without Arrays/Strings)
  //Write a program to print the following pattern:

  #include <stdio.h>

int main()
{
    int i, j;

    // Increasing
    for(i = 1; i <= 9; i = i + 2)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Decreasing
    for(i = 7; i >= 1; i = i - 2)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}