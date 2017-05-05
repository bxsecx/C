#include <stdio.h>
char *strcpy(char *strDest, const char *strSrc)
{
    if(strDest == NULL || strSrc == NULL)	
        return NULL;
    if(strDest == strSrc)
        return strDest;
	char *pDest = strDest;
	char *pSrc = strSrc;
	while((*pDest++ = *pSrc++) != '\0')
		;
		return strDest;
}

int main(void)
{
	char *psource = "Hello World";
	char pDest[12] = {0};
	strcpy(pDest, psource);
	printf("%s\n",pDest);
    return 0;
}


