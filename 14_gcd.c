#include<stdio.h>
int main()
{  int a,b;
   printf("Enter Numbers:");
   scanf("%d%d",&a,&b);
   int gcd;
   while(a>0 and b>0 and gcd!=1)
   {
   	  if(a<b)
		{
			b=b/a;
			gcd=a;
		}
		else
		{
			a=a/b;
			gcd=b;
		}
		//printf("%d\n",gcd);
   }
   printf("GCD is :%d",gcd);
   return 0;	
}
