#include <stdio.h>
#include <ctype.h>
#include <assert.h>
double atof(char *s)
{
	double val, power;
	int i, sign;
	assert(s != NULL);
	for(i = 0; isspace(s[i]);i++)
		;
	sign = (s[i] == '-')?-1:1;
	if(s[i]=='+' || s[i]=='-')
		i++;

	//处理实数中整数部分
	for(val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if(s[i] == '.')
		i++;

	//处理小叔部分
	for(power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0*val+(s[i]-'0');
		power *= 10;
	}
	return sign * val / power;
}

int main()
{
	printf("The 15.12345 is %f", atof("15.12345"));
	return 0;
}



