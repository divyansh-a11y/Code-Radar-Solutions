#include <stdio.h>

int main() {
    int cost_price, selling_price;
    scanf("%d %d", &cost_price, &selling_price);

    if (selling_price - cost_price > 0)
        printf("Profit");
    else if (selling_price - cost_price < 0)
        printf("Loss");
    else
        printf("No Profit No Loss");

    return 0;
}