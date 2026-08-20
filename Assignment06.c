#include <stdio.h>

int countOdd(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return (n + 1) / 2;
}

int countEven(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n / 2;
}

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int oddCount = countOdd(n);
    int evenCount = countEven(n);

    printf("Count of odd numbers from 1 to %d: %d\n", n, oddCount);
    printf("Count of even numbers from 1 to %d: %d\n", n, evenCount);

    return 0;
}
