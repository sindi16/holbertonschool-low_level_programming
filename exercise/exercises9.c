#include <stdio.h>

void myFunction(int x, int y)
{
	int sum = x + y;
	printf("the sum of %d + %d is: %d\n", x, y, sum);
}
int main()
{
	myFunction(10, 5);
	myFunction(11, 15);
	return (0);

}
