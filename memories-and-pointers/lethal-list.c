#include <stdio.h>
#include <stdlib.h>

int main()
{
	int doses[] = {1, 3, 2, 1000};
	
	printf("Issue dose %i\n", 3[doses]);

	// doses[3] == *(doses + 3) == *(3 + doses) == 3[doses]


	return 0;
}
