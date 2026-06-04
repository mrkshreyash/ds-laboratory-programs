#include <stdio.h>
#include <string.h>

struct Product
{
    char name[20];
    float price;
};

void sortProducts(struct Product p[], int n)
{
    int i, j, minIdx;
    struct Product temp;

    for (i = 0; i < n - 1; i++)
    {
        minIdx = i;
        for (j = i + 1; j < n; j++)
        {
            if (p[j].price < p[minIdx].price)
            {
                minIdx = j;
            }
        }
        // Swapping the entire structure
        temp = p[minIdx];
        p[minIdx] = p[i];
        p[i] = temp;
    }
}

int main()
{
    struct Product shop[] = {
        {"Keyboard", 25.50}, {"Mouse", 12.99}, {"Monitor", 150.00}, {"Cable", 5.00}};
    int n = 4;

    sortProducts(shop, n);

    printf("--- Products Sorted by Price (Lowest to Highest) ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-10s : $%.2f\n", shop[i].name, shop[i].price);
    }
    return 0;
}