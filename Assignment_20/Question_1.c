#include<stdio.h>
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main()
{
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	printf("Values before swapping\nx = %d\ny = %d\n",x,y);
	swap(&x,&y);
	printf("Values after swapping\nx = %d\ny = %d",x,y);
	return 0;
}
