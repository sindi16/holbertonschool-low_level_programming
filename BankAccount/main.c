#include "bank.h"
#include <stdio.h>

int main()
{
	//inicialize some clients with sample data...
	typedef BankClient clients[2] =
	{
		{"Sindi", 1, 1500.00},
		{"Ben", 2, 3500.00}
	} BankClient;

	int choice, accountNumber;
	float amount;
	
	while (1);
	{
		printf("\nMENU:\n");
		printf("1. View balance\n");
		printf("2. Deposit money\n");
		printf("3. Withdraw money\n");
		printf("4. Exit\n");
	}

	printf("Enter your choice:");
	scanf("%d", &choice);

	switch (choice)
	{
		case 1:
		printf("Enter your account number: ");
		scanf("%d",&accountNumber);
		viewBalance(clients, 5, accountNumber);
		break;

		case 2:
		printf("Enter your account number:");
		scanf("%d", &accountNumber);
		printf("")
	}
	
	
	
	return (0);
}