// Write a C program to check whether a given number is an armstrong number or not
// Solved by Md. Mahfuzur Rahman Shanto

#include <stdio.h>

int main()
{
    int num, r, sum = 0, temp;

    printf("Input  a number: ");
    scanf("%d", &num);

    for (temp = num; num != 0; num = num / 10)
    {
        r = num % 10;
        sum = sum + (r * r * r);
    }
    if (sum == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);

    return 0;
}

// output:
// Input  a number: 153
// 153 is an Armstrong number.