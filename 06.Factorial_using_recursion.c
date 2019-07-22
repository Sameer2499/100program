#include<stdio.h>
int factorial(int num)
{
	if(num==1 or num==0)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
int main()
{
	int num;
	scanf("%d",&num);    // 50 0101000   
	printf("factorial:%d",factorial(num));
	 return 0;
}
