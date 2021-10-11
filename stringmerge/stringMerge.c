#include <string.h>
#include <stdio.h>
#define N 20

void StringStrcat(char *src1,char *src2, char *dst)
{
	int k = 0;
	for(int i=0; i< src1[i]!='\0'; i++)
	{
		dst[k++]=src1[i];
	}
    for(int j=0; j< src2[j]!='\0'; j++)
	{
		dst[k++]=src2[j];
	}		
	dst[k] = '\0';
}

int main(void)
{
	int length;
	char r_str[N];                  // merged string
	char* p_str = "345";         // string 1
	char* q_str = "67890";         // string 2
	StringStrcat(p_str, q_str,r_str);
	printf("%s\n",r_str);
	return 0;
}
