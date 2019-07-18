#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);    // 50 0101000   
	int f=1;
	while(num>0)
	{
		f*=num;
		num--;
	}
	printf("factorial:%d",f);
	 return 0;
}
