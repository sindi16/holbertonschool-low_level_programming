#include "bank.h"
#include <stdio.h>

//function to see the balance of a client

void viewBalance(BankClient clients[], int size, int accountNumber)
{
	int i;
	for(int = 0; i < size; i++)
	{
		if (clients[i].accountNumber == accountNumber) // if the account we put, match with one account that is listed in the systemof bank, display. 
		{
			printf("Account balance for %s: %.2f\n", client[i].name, client[i].balance);
			return; // nothing like exit when we found // the program is searching if the number you give match with one account number of acutomer in system.
		}
	}
	else
	{
		printf("Account doesn't exist.\n");
	}
}
void deposit(BankClient clients[], int size, int accountNumber, float amount)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (clients[i].accountNumber == accountNumber)
		{	
			clients[i].balance += amount;
			printf("The amount that is deposited: %.2f, New balance is: %.2f\n, amount, clients[i].balance");
		}
	}
	else
	{
		printf("Account not exist");
	}
}
void withdraw(struct BankClient clients[i], int size, int accountNumber, float amount)
{
	for (i = 0; i < size; i++)
	{
		if (client[i].accountNumber == accountNumber)
		{
			if (client[i].balance >= amount)
			{
				client[i]balance -= amount;
				printf("withdrew is %.2f, New balance is: %.2f\n", amount, clients[i].balance);
			}
			else
			{
				printf("Insufficent amount")
			}
		}
	}
	else
	{
		printf("Account doesn't exist");
	}
}