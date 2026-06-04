#include <stdio.h>

long factorial(int n)
{
    // Base Case: 0! and 1! are both 1
    if (n <= 1)
    {
        return 1;
    }
    // Recursive Step
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %ld\n", num, factorial(num));
    return 0;
}