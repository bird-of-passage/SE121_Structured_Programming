// Write a C program to calculate the factorial of a given number
#include <stdio.h>
int main()
{
    int i, fact = 1, num;

    printf("Input the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        fact = fact * i;

    printf("The Factorial of %d is: %d\n", num, fact);

    return 0;
}

// output:
// Input the number : 5
// The Factorial of 5 is: 120