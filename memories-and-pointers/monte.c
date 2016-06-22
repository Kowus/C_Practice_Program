#include <stdio.h>

int main()
{
	// char *cards = "JQK";  gives compile error because string literals are seet in ROM 
	char cards[] = "JQK";
	char a_card = cards[2];
	
	cards[2] = cards[1];
	cards[1] = cards[0];
	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	
	puts(cards);





	return 0;
}


/*
One way to avoid this problem in the future is to never write code that sets a simple char pointer to a string
literal value like:
			char *s = "Some string";

There’s nothing wrong with setting a pointer to a string literal—the problems only happen when you try to
modify a string literal. Instead, if you want to set a pointer to a literal, always make sure you use the const
keyword:
			const char *s = "some string";

That way, if the compiler sees some code that tries to modify the string, 
it will give you a compile error:
			 s[0] = 'S';
			 monte.c:7: error: assignment of read-only location
*/
