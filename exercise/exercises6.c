#include <stdio.h>

void greetperson(char* name)
{
	printf("Hello, %s!\n", name);
}
int main()
{
	greetperson("Alice");
	greetperson("Anna!");
	return (0);
}