#include<stdio.h>
void sort(int *ptr,int size)
{
   int i,j;
   for(i=0;i<size-1;i++)
    {
    	for(j=i+1;j<size;j++)
    	{
    		if(ptr[i]>ptr[j])
    		 {
    		 	ptr[i]=ptr[i]+ptr[j];
    		 	ptr[j]=ptr[i]-ptr[j];
    		 	ptr[i]=ptr[i]-ptr[j];
			 }
		}
    }	
}
int main()
{
	int n,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int x[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&x[i]);
	printf("Array Before Sort\n");
	for(i=0;i<n;i++)
	  printf("%d ",x[i]);
	sort(x,n);
	printf("\nArray After Sort\n");
	for(i=0;i<n;i++)
	  printf("%d ",x[i]);
	return 0;
}
