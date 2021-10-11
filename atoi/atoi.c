 //atoi :Convert an number string to interger
 //How would you change a string of numbers into in interger

 #include <stdio.h>
 #include <string.h>
 
 int Convert_atoi(char str[])
 {
     int length = strlen(str);
	 int n=0;
	 char m;
	 for (int i = 0; i < length; i++ )
	 {
	    m = str[i] - '0';	
	    n = (n*10 + m);
	 }
	 return n;
 }

 int main(void)
 {
	 char str[] = "12345678";
	 int value = 0;
	 value = Convert_atoi(str);
	 printf("The return value from atoi is %d", value);
 }
 