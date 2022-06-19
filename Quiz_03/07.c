// Write a C program to enter a number and print its reverse.
#include <stdio.h>

int main()
{
    int n, mod, reverse = 0;

    printf("Enter any number to find reverse: ");
    scanf("%d", &n);

    int num = n;

    while (num != 0)
    {

        mod = num % 10;

        reverse = reverse * 10 + mod;

        num /= 10;
    }

    printf("Reverse Number : %d\n", reverse);

    return 0;
}

// output:
// Enter any number to find reverse: 246
// Reverse Number : 642