#include<stdio.h>
int gcd(int a,int b)
{
	if(a==b)return a;
	else if(a==1 or b==1)return 1;
	else if(a==0)return b;
	else if(b==0)return a;
	else
	{
		if(a<b)
		{
			gcd(a,b/a);
		}
		else
		{
			gcd(a/b,b);
		}
	}
}
int main()
{  int a,b;
   printf("Enter NUmbers:");
   scanf("%d%d",&a,&b);
   printf("GCD is :%d",gcd(a,b));
   return 0;	
}
