#include<stdio.h>
#include<string.h>
int main()
{
  char st[50],*ptr;
  ptr=st;
  int i,ln,count=0;
   printf("Enter a string (under 50 character)\n");
   fgets(ptr,50,stdin);
   st[strlen(ptr)-1]='\0';
   ln=strlen(ptr);
   for(i=0;ptr[i]!='\0';i++)
    {
    	if(ptr[i]=='a'||ptr[i]=='A'||ptr[i]=='i'||ptr[i]=='I'||ptr[i]=='e'||ptr[i]=='E'||ptr[i]=='o'||ptr[i]=='O'||ptr[i]=='u'||ptr[i]=='U')
    	 count++;
	}
	printf("Vowels = %d\nConsunants = %d",count,ln-count);
   return 0;
}
