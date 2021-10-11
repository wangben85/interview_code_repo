 // itoa :Convert integer to string (non-standard function) 
 
 #include <stdio.h>
 #include <string.h>
int Convert_itoa(int N, char* buf)  // input number
 {
	 int i=0,j=0;
	 int length;
	 
	 while((j=(N/10))!=0)
	 { 
       buf[i++] = N%10 + '0';    // convert integer to char, don't forget plus '0'
	   N = j;
	 }
     buf[i++] = N%10 + '0';      // convert integer to char, don't forget plus '0'
	 buf[i]='\0';                // last character 
	 length = i;
	 return length;
 }

 int main(void)
 {
	 int testNum = 45679;
	 int len;
	 char str[20];
	 char revertstr[20];
	 char* q;
	 len = Convert_itoa(testNum, str);
	 q = &str[len-1];
	 for( int i = 0; i < len ; i++)
	 {
		 revertstr[i] = *q;
		 q--;
	 }
    //  printf("The return string is \'%s\'", str);
     printf("The return revert string is \'%s\'", revertstr);
 }
