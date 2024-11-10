#include <stdio.h>

void printReceipt(char* name, double totalAmount)
{
	printf("Receipt for %s , your total amount is : %.2f",name, totalAmount);
	printf("Thank you for choosing us!");
}
int main()
{	
	printReceipt("sindi", 100.234);
	return (0);
}