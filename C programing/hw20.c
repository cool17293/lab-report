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