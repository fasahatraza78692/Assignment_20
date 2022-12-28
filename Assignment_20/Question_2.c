#include<stdio.h>
#include<string.h>
void strswap(char *S1,char *S2)
{
	char str[strlen(S1)];
	strcpy(str,S1);
	strcpy(S1,S2);
	strcpy(S2,str);
}
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	char s1[n],s2[n];
	fflush(stdin);
	printf("Enter 1st string\n");
	gets(s1);
	printf("Enter 2nd string\n");
	gets(s2);
	printf("Before Swapping\n1st String = %s\n2nd String = %s\n",s1,s2);
	strswap(s1,s2);
	printf("After Swapping\n1st String = %s\n2nd String = %s",s1,s2);
	return 0;
}
