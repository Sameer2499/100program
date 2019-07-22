#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);    // 50 0101000   
	int rev=0;
	while(num)
	{
		int d=num%10;
		rev=rev*10+d;
		num/=10;
	}
	printf("%reversed :%d",rev);
	return 0;
}
