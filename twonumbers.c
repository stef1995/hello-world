#include <stdio.h>

int main(void)
{
	int no1=0;
	int no2=0;
	
	printf("Type in your first number: ");
	scanf("%d", &no1);
	printf("Type in your second number: ");
	scanf("%d", &no2);
	printf("These are your two numbers: %d, %d", no1, no2);
	return 0;
}
