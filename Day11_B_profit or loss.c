#include <stdio.h>

//Write a program to find profit or loss percentage given cost price and selling price.

int main() {
    float costPrice, sellingPrice, profit, loss;

   
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

   
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", (profit / costPrice) * 100);
    }
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", (loss / costPrice) * 100);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
