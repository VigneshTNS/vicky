#include<stdio.h>
int main()
{
	int i,a,b=0;
	printf("please enter the positive integer");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	b=b+i;
	printf("\n sum of natural numbers=%d",b);
	return 0;
}
