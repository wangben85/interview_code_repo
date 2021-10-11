// serach the sole duplicated number in an array


#include <stdio.h>
#define N 5


int do_dup(int arr[],int NUM)
{
   int i;
   int flag[NUM];
   
   for(i=0;i<=NUM-1;i++)
   {
	   flag[i] = 0;               // default set the flags to 0
   }

   for(i=0;i<=NUM-1;i++)
   {
	   if(flag[arr[i]]==0) 
	   {
		   flag[arr[i]]=1;
	   }
	   else
	   {
		   return arr[i];       // since there is one number duplicated, the flag is already set to 1 last time, so we have found the duplicated one
	   } 
   }	   
}


int main(void)
{
  int i,a[N],temp;

  printf("please input all the numbers into the array!\n");

  for(i=0;i<N;i++)

    scanf("%d",&a[i]);

  printf("The input numbers are:\n");   // print the numbers

  for(i=0;i<N;i++)

  printf("%d ",a[i]);

  temp=do_dup(a,N);    // search the sole duplicated number in the array

  printf("The repetitive number is %d\n",temp);

  return 0;

}




