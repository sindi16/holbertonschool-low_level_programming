#include "bank.h"
#include <stdio.h>

// Defining the structure using typedef
typedef struct BankClient {
    char name[100];
    int accountNumber;
    float balance;
} BankClient;

void viewBalance(BankClient clients[], int size, int accountNumber);
void deposit(BankClient clients[], int size, int accountNumber, float amount);
void withdraw(BankClient clients[], int size, int accountNumber, float amount);

int main() {
    // Initialize some clients with sample data
    BankClient clients[2] = {
        {"Sindi", 1, 1500.00},
        {"Ben", 2, 3500.00}
    };

    int choice, accountNumber;
    float amount;

    while (1) {
        printf("\nMENU:\n");
        printf("1. View balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter your account number: ");
                scanf("%d", &accountNumber);
                viewBalance(clients, 2, accountNumber);
                break;

            case 2:
                printf("Enter your account number: ");
                scanf("%d", &accountNumber);
                printf("Enter the deposit amount: ");
                scanf("%f", &amount);
                deposit(clients, 2, accountNumber, amount);
                break;

            case 3:
                printf("Enter your account number: ");
                scanf("%d", &accountNumber);
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                withdraw(clients, 2, accountNumber, amount);
                break;

            case 4:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
