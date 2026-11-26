#include <stdio.h>

float balance = 5000.0;

void checkBalance(void) {
    printf("\nCurrent Balance: Rs. %.2f\n", balance);
}

void depositMoney(void) {
    float amount;

    printf("\nEnter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
    }
    else {
        balance = balance + amount;
        printf("Deposit successful!\n");
        printf("Updated Balance: Rs. %.2f\n", balance);
    }
}

void withdrawMoney(void) {
    float amount;

    printf("\nEnter amount to withdraw: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
    }
    else if (amount > balance) {
        printf("Insufficient balance.\n");
    }
    else {
        balance = balance - amount;
        printf("Withdrawal successful!\n");
        printf("Updated Balance: Rs. %.2f\n", balance);
    }
}


int main(void) {

    int choice;
    char pin[20];

    printf("\n=====================================\n");
    printf("      WELCOME TO GIRLLYPOPS BANK\n");
    printf("=====================================\n");

    printf("Enter your PIN: ");
    scanf(" %[^\n]", pin);

    if (pin[0] == 'p' &&
        pin[1] == 'i' &&
        pin[2] == 'n' &&
        pin[3] == 'k' &&
        pin[4] == ' ' &&
        pin[5] == 'l' &&
        pin[6] == 'i' &&
        pin[7] == 'p' &&
        pin[8] == 's' &&
        pin[9] == '\0') {

        printf("\nPIN Accepted!\n");
        printf("You are slaying!\n");
        printf("Welcome to Girllypops Bank ATM.\n");
    }
    else {
        printf("\nIncorrect PIN! Access Denied.\n");
        printf("Any day, but not today!\n");
        return 0;
    }

    while (1) {

        printf("\n=====================================\n");
        printf("         GIRLLYPOPS BANK ATM\n");
        printf("=====================================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("-------------------------------------\n");
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
                printf("\n=====================================\n");
                printf(" Thank you for using Girllypops Bank!\n");
                printf("          Have a great day!\n");
                printf("=====================================\n");
                return 0;

            default:
                printf("\nInvalid choice. Please select 1 to 4.\n");
        }
    }
}