#include <stdio.h>
//1. 
int is_integer_lower_store1()
{
	int x=0x1;
	char *p = (char*)&x;
	if(*p == 1)
		return 1;
	else
		return 0;
}
//2.
typedef union{
	char c;
	int a;
}U;
int is_integer_lower_store2()
{
	U u;
	u.a = 1;
	if(u.c==1)
		return 1;
	else
		return 0;

}


int main()
{
	if(is_integer_lower_store2())
		printf("There is lower\n");
	else
		printf("There is Higher\n");
	return 0;
}
