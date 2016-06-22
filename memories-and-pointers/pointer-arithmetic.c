#include <stdio.h>

void skip(char *msg)
{
	puts(msg + 6);
}

int main()
{
	char *message = "Don't call me";
	skip(message);


	return 0;
}
