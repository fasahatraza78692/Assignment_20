#include<stdio.h>
int main()
{
	char str[50],*ptr;
	int i;
	ptr=str;
	printf("Enter a string (under 50 characters)\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	printf("String in reverse order\n");
	for(i=strlen(str)-1;i>=0;i--)
	    printf("%c",ptr[i]);
	return 0;
}
