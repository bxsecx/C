#include <stdio.h>

int strcmp(char* str1, char* str2)
{
	while(*str1 && *str2 && *str1==*str2)
	{
		++str1;
		++str2;
	}
	return *str1 - *str2;
}
int main(void)
{
	char *pStr1 = "Hello World0";
	char *pStr2 = "Hello World1";
	printf("Str1 Cmp Str2 is %d\n",strcmp(pStr1, pStr2));
	return 0;
}


