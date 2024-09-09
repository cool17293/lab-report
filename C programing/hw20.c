//.If the cost price and selling price of a item are input from the user write a program to check whether the seller have  made profit or loss and also calculate how much profit or loss occur        (if);

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter the cost price of the item: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice)
    {
        profitOrLoss = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profitOrLoss);
    }
    else if (sellingPrice < costPrice)
    {
        profitOrLoss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", profitOrLoss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}