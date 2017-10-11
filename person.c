#include <stdio.h>

int main(void)
{
	char name[10];
	char surname[10];
	char monthofbirth[10];
	char hometown[10];

	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your surname: ");
	scanf("%s", surname);
	printf("Enter your Month of Birth: ");
	scanf("%s", monthofbirth);
 	printf("Enter your Home Town: ");
	scanf("%s", hometown);
	printf("This is you ;) \n %s %s \n %s \n %s \n", name, surname, monthofbirth, hometown);
	return 0;
}