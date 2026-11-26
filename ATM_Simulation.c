#include <stdio.h>

float balance = 5000.0f;

void checkBalance(void) {
    printf("\nCurrent Balance: Rs. %.2f\n", balance);
}

void depositMoney(void) {
    float amount;

    printf("\nEnter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
    } else {
        balance = balance + amount;
        printf("Deposit successful.\n");
        printf("Updated Balance: Rs. %.2f\n", balance);
    }
}

void withdrawMoney(void) {
    float amount;

    printf("\nEnter amount to withdraw: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance = balance - amount;
        printf("Withdrawal successful.\n");
        printf("Updated Balance: Rs. %.2f\n", balance);
    }
}

int main(void) {
    int choice;

    while (1) {

        printf("\n=============================\n");
        printf("       ATM SIMULATION\n");
        printf("=============================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                checkBalance();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                printf("\nThank you for using the ATM.\n");
                return 0;

            default:
                printf("\nInvalid choice. Please select 1 to 4.\n");
        }
    }
}