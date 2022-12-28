#include<stdio.h>
int main()
{
	int n,*ptr,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	ptr=a;
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&ptr[i]);
	printf("Elements in reverse order\n");
	for(i=n-1;i>=0;i--)
	  printf("%d ",ptr[i]);
	return 0;
}
