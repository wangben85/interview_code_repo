// reserve a string

#include <string.h>
#include <stdio.h>

void StringReverse(char *src,char *dst, int length)
{
	int j=0;
	for(int i = length - 1; i > 0; i--)
	{
		dst[j++] = src[i];     // source string reverted then copy to destination
	}
	dst[j++] = src[0];
	dst[j] = '\0';             // last character
}

int main(void)
{
	char pStr[20] = "1178";
	char qStr[20]; 
	int lenP = strlen(pStr);
	StringReverse(pStr, qStr, lenP);
	printf("The original string is %s\n", pStr);
	printf("The reverse string is %s\n", qStr);
	return 0;
}





