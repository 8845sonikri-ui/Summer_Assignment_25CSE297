#include <stdio.h>

int main()
{
    int account_no;
    char name[20];
    float balance, deposit;

    printf("Enter Account Number: ");
    scanf("%d", &account_no);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance = balance + deposit;

    printf("\n--- Bank Account Details ---\n");
    printf("Account Number: %d\n", account_no);
    printf("Name: %s\n", name);
    printf("Total Balance: %.2f\n", balance);

    return 0;
}