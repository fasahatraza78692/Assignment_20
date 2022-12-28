#include<stdio.h>
int main()
{
	int n,*ptr,i,sum=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	ptr=a;
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&ptr[i]);
	for(i=0;i<n;i++)
	  sum=sum+ptr[i];
	printf("Sum of all the elements of array = %d",sum);
	return 0;
}
