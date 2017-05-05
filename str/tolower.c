#include <stdio.h>
#include <assert.h>

char tolower1(char ch)
{
	assert(ch >= 'A' && ch <= 'Z');	
	return (ch + 'a'-'A');
}
char tolower2(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return (ch + 'a' - 'A');
	else
		return ch;
}

int main()
{
	char *p = "Hello,WORLD";
	while(*p!= '\0')
	{
		char c = tolower2(*p);
		printf("%c",c);
		p++;
	}
	return 0;
}


