#include <stdio.h>

void myFunction(char* name, int age, int height)
{
	printf("Hello %s, you are %d years old. Your height is %d\n", name, age, height);
}
int main()
{
	myFunction("Sindi", 23, 165);
	myFunction("heilli", 34, 189);
	return (0);
}