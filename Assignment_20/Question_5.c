int main()
{
	int a,b;
	int *ptr1=&a,*ptr2=&b;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	if(*ptr1>*ptr2)
	 printf("Greater = %d",*ptr1);
	else
	 printf("Greater = %d",*ptr2);
	return 0;
}
