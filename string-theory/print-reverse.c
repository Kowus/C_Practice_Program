#include <stdio.h>
#include <string.h>



char *juices[] = {"dragonfruit", "waterberry", "sharonfruit", "uglifruit", "rumberry", "kiwifruit", "mulberry", "strawberry", "blueberry", "blackberry", "starfruit"};




void print_reverse(char *s)
{
	size_t len = strlen(s);
	char *t = s + len - 1;
	while(t >= s)
	{
		printf("%c", *t);
		t = t - 1;
	}
	puts("");
}

void prum(int i)
{
	
	int bin = 11;
	if((i < 0) && (i *(-1) <= bin))
	
		print_reverse(juices[(i * (-1))]);
	
	
	else if((i >= 0) && (i *(-1) <= bin))
	
		printf("%s\n", juices[i]);
	
	
	else
		puts("I don't understand that value!");
}


int main()
{
	
	
	char usrin[][4];
	while(usrin[0] != 'X'){
		puts("Input next word: ");
		scanf("%3s", usrin);
		int val = 0;
		
		switch(usrin[0])
		{
			case '0':
				//val = atoi(usrin);
				prum(0);
				break;
			case '1':
				//val = atoi(usrin);
				prum(1);
				break;
			
			
			case 'X':
				continue;
			default:
				//val = atoi(usrin);
				//prum(val);
				continue;
		}
		 
	}
	
	
	
	
	return 0;
}



