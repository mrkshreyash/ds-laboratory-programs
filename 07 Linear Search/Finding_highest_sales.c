#include <stdio.h>

struct Sale
{
    char day[15];
    int amount;
};

void findSaleDay(struct Sale records[], int n, int targetAmount)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (records[i].amount == targetAmount)
        {
            printf("Target amount %d was achieved on: %s\n", targetAmount, records[i].day);
            found = 1;
            break; // Stop after finding the first occurrence
        }
    }
    if (!found)
    {
        printf("No day found with sales amount %d.\n", targetAmount);
    }
}

int main()
{
    struct Sale weekSales[7] = {
        {"Monday", 500}, {"Tuesday", 750}, {"Wednesday", 600}, {"Thursday", 750}, {"Friday", 900}, {"Saturday", 1200}, {"Sunday", 1100}};

    int searchVal;
    printf("Enter the sales amount you are looking for: ");
    scanf("%d", &searchVal);

    findSaleDay(weekSales, 7, searchVal);

    return 0;
}