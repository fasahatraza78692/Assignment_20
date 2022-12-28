// this complete assmnt about pointer demonstration;
#include<stdio.h>
int main()
{
   int num=10;
   int *ptr;
   ptr=&num;
   
   printf("Address of num = %d\n",&num);
   printf("Value of num = %d\n",num);
   printf("Address of ptr = %d\n",&ptr);
   printf("Valur of ptr = %d\n",ptr);
   printf("Value pointed by ptr = %d\n",*ptr);	
	return 0;
}
