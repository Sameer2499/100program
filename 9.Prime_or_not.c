#include<stdio.h>
int main()
{
	int num,f=1;
	scanf("%d",&num);
	if(num==1)printf("not prime");
	else if(num==2 or num==3)printf("prime");
	else{    // 50 0101000   
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			f=0;
			break;
		}
	}
	if(f==1)printf("Prime");
	else printf("Not Prime");
	}
	return 0;
}
