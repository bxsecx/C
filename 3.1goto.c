#include <stdio.h>

//2
int main(void)
{
	printf("The main begin...\n");
LabelA:
	printf("The LabelA \n");


	printf("Goto LabelA\n");
	goto LabelA;
LabelB:

	return 0;
}

