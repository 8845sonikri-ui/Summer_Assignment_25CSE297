#include <stdio.h>

int main()
{
    int item_id, quantity;
    char item_name[30];
    float price, total;

    printf("Enter Item ID: ");
    scanf("%d",&item_id);

    printf("Enter Item Name: ");
    scanf("%s",item_name);

    printf("Enter Quantity: ");
    scanf("%d",&quantity);

    printf("Enter Price: ");
    scanf("%f",&price);

    total = quantity * price;

    printf("\n--- Inventory Details ---\n");
    printf("Item ID: %d\n",item_id);
    printf("Item Name: %s\n",item_name);
    printf("Quantity: %d\n",quantity);
    printf("Total Price: %.2f\n",total);

    return 0;
}