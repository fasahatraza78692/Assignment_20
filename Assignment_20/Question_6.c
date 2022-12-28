#include<stdio.h>
#include<string.h>
int main()
{
  char st[50],*ptr;
  ptr=st;
  int i,ln=0;
   printf("Enter a string (under 50 character)\n");
   fgets(ptr,50,stdin);
   st[strlen(ptr)-1]='\0';
   for(i=0;ptr[i]!='\0';i++)
      ln++;
   printf("Lenght = %d",ln);
   return 0;
}
