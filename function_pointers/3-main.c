#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, int argv)
{
	int num1, num2;
	char* op;

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}