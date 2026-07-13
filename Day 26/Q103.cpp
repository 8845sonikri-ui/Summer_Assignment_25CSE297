#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    printf("----- ATM MENU -----\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("New Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter withdraw amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Collect your money\n");
                printf("Remaining Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }

            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}