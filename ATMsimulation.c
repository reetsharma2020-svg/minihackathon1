

#include <stdio.h>

void checkBalance(float balance)
{
    printf("\nYour Current Balance: Rs. %.2f\n", balance);
}

float deposit(float balance)
{
    float amount;

    printf("\nEnter amount to deposit: Rs. ");

    if (scanf("%f", &amount) != 1)
    {
        printf("Invalid input!\n");
        return balance;
    }

    if (amount <= 0)
    {
        printf("Please enter a valid amount!\n");
    }
    else
    {
        balance = balance + amount;

        printf("Money Deposited Successfully!\n");
        printf("Updated Balance: Rs. %.2f\n", balance);
    }

    return balance;
}

float withdraw(float balance)
{
    float amount;

    printf("\nEnter amount to withdraw: Rs. ");

    if (scanf("%f", &amount) != 1)
    {
        printf("Invalid input!\n");
        return balance;
    }

    if (amount <= 0)
    {
        printf("Please enter a valid amount!\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient Balance!\n");
    }
    else
    {
        balance = balance - amount;

        printf("Please Collect Your Cash!\n");
        printf("Updated Balance: Rs. %.2f\n", balance);
    }

    return balance;
}

int main()
{
    int choice;
    float balance = 5000.00;

    printf("================================\n");
    printf("       WELCOME TO ATM\n");
    printf("================================\n");

    do
    {
        printf("\n--------- ATM MENU ---------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice! Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            continue;
        }

        switch (choice)
        {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                printf("Have a nice day!\n");
                break;

            default:
                printf("\nInvalid choice! Please select 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}
