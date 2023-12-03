#include <stdio.h>
#include <stdlib.h>

int main()

{
	int num_1;


	printf("Enter first number ");
	scanf_s("%d", &num_1);


	if (num_1 % 2 == 0)
	{
		printf("is even number");
	}

	else
	{
		printf("is odd number");
	}

	return 0;
}
