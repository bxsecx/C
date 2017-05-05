#include <stdio.h>
int main(void)
{
	int a[10];
	int sum = 0;
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("Please input the score for %d:\n",i+1);
		scanf("%d",&a[i]);
	}

	for(i = 0; i < 10; i++)
		sum += a[i];

	printf("The sum is: %d, and average score is: %f\n", sum, (float)sum/10);


	return 0;
}
