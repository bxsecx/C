#include <stdio.h>
int change_int_storage(int val)
{
	int iRum = 0, i = 0;
	char* pByte=(char*)&val;
	i = sizeof(int)-1;
	while(i >= 0)
	{

		iRum |= *pByte<<(8*i);//把整数的第1，2，3，4字节一次左移24,16,8,0位o
		pByte++;  //前进一个字节
		i--;
	}
	return iRum;
}

int main()
{
	int n = 0x1;
	char* p = (char*)&n;
	if(*p == 1)
		printf("Change Ago is Lower\n");
	else
		printf("Change Ago is Higher\n");
	n = change_int_storage(n);
	if(*p==1)
		printf("Change After is Lower\n");
	else
		printf("Change After is Higher\n");

	return 0;
}


