#include <stdio.h>

int findSum(int n)
{
    // Base Case: The sum of 1 is just 1
    if (n == 1)
    {
        return 1;
    }
    // Recursive Step
    return n + findSum(n - 1);
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d integers is: %d\n", n, findSum(n));
    return 0;
}