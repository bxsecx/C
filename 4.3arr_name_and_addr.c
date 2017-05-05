#include <stdio.h>
int main(int argc, char* argv[])
{
	int a[2][3] = {10};

	int *r = &a[0][0];
	int (*p)[3] = a;
	int (*q)[2][3] = &a;

	printf("a=%p, &a=%p\n", a, &a);

	printf("r=%p, p=%p, q=%p\n",r, p, q);
	printf("r+1=%p, p+1=%p, q+1=%p\n", r+1, p+1, q+1);

	return 0;
}


