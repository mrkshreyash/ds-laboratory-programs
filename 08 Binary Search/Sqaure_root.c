#include <stdio.h>

double findSquareRoot(double n)
{
    if (n < 0)
        return -1; // Cannot find sqrt of negative
    if (n == 0 || n == 1)
        return n;

    double low = 0, high = n;
    double precision = 0.000001; // How accurate do we want to be?
    double mid;

    // While the "gap" is bigger than our precision
    while ((high - low) > precision)
    {
        mid = low + (high - low) / 2;

        if (mid * mid > n)
            high = mid; // Sqrt is in the lower half
        else
            low = mid; // Sqrt is in the upper half
    }
    return mid;
}

int main()
{
    double num;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);

    double result = findSquareRoot(num);
    if (result == -1)
        printf("Invalid Input.\n");
    else
        printf("Square root of %.2f is approximately: %.6f\n", num, result);

    return 0;
}