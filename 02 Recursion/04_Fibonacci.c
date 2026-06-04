#include <stdio.h>

int fibonacci(int n)
{
    // Base Case: The first two numbers are 0 and 1
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive Step: Sum of the two previous numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int terms;
    printf("How many Fibonacci terms? ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}