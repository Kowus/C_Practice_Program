/*
 * This sketch was put together by Barnabas Nomo
 * http:www.github.com/Kowus to illustrate the concept of
 * using pointers for data entry
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char first_name[20];
	char last_name[20];

	printf("Enter first and last name: ");
	scanf("%19s %19s", first_name, last_name);
	// Try this piec in c#
	
	printf("First: %s Last: %s\n", first_name, last_name);


	return 0;
}
