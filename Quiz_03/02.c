// Write a program in C to display the n terms of odd natural number and their sum
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Please input any digit num : ");
    scanf("%d", &n);

    printf("Natural odd number : ");

    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
            printf(" %d", i);
        }
    }

    printf("\nOdd natural number sum : %d\n", sum);

    return 0;
}

// output:
// Please input any digit num : 5
// Natural odd number :  1 3 5
// Odd natural number sum : 9