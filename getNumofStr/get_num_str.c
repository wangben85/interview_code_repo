
#include <stdio.h>
#include "conio.h"
#include <string.h>


// get the numbers of substr exists in string
int get_num_str(char *str,char *substr)
{
  char *p=str,*q=substr;

  int len1=strlen(str);       /* the length of source string*/

  int len2=strlen(substr);      /* the length of sub_string */

  int i=0,j=0,count=0;

  while(i<len1)
  {

     j=0;

     while(p[i++]==q[j])
     {  
       j++;

       if(j==len2)
       {
         count++;    /*all the characters are match in the substring*/
         
         j=0;
       }
     }
   }
   return count;
 }

int main()
{
    char *str="12345864123575234123423512341234";   /* source string*/

    char *substr="1234";   /*substring*/

    int n=0;

    printf("The deafult string is: %s\n",str);

    printf("The deafult sub_string is: %s\n",substr);

    n=get_num_str(str,substr);

    printf("There are %d substr in str!\n",n);
}

