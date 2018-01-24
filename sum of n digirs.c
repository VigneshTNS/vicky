#include <stdio.h>
int main()
{
	long long a;
	int count=0;
	printf("please enter an integer value");
	scanf("%lld",&a);
	while(a!=0)
	{
		a/=10;
		++count;
	}
	printf("count of digits=%d",count);
	return 0;

}
