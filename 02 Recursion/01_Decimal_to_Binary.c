#include <stdio.h>

void convertToBinary(int n)
{
    // Base Case: If the number is 0, we've finished dividing
    if (n == 0)
    {
        return;
    }

    // Recursive Step: Divide the number and go deeper
    convertToBinary(n / 2);

    // After coming back from the call, print the remainder
    // This prints the bits in the correct order (reverse of calculation)
    printf("%d", n % 2);
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("0");
    else
        convertToBinary(num);

    printf("\n");
    return 0;
}