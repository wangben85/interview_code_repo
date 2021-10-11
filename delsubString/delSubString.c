// delete all the s2 characters from s1
#include <stdio.h>
#include <string.h>

void del_s2_from_s1(char *s1,char *s2)
 {
    int i,j,k=0;
    for(i=0;s1[i]!='\0';i++)
    { for(j=0;s2[j]!='\0'&&(s1[i]!=s2[j]);j++);
      if(s2[j]=='\0')  s1[k++]=s1[i];
    }
    s1[k]='\0';
 }

void deleteCharacters(char *s1,char *s2)
{
   int i,j,k=0;
   char *p = s1;
   char *q = s2;
   for( i = 0 ; i < strlen(s1); i++)
   {
     for( j = 0; (j < strlen(s2)) && s1[i] != s2[j]; j++);
     if ( j == strlen(s2))   s1[k++] = s1[i];
   }
    s1[k]='\0';
}

int main()
{
    char s1[20],s2[20];
    //input strings
    printf("please input deafult string s1:\n");
    scanf("%s",&s1);
    printf("please input deafult string s2:\n");
    scanf("%s",&s2);
    //output strings
    printf("please output string s1:%s\n",s1);
    printf("please output string s2:%s\n",s2);
    //delete the substring
    // del_s2_from_s1(s1,s2);
    deleteCharacters(s1,s2);
    printf("please output converted string s1:%s\n",s1);
    getchar();

}
