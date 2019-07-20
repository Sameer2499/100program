#include<stdio.h>
int pow(int a,int b)
{
	if(b==1)return a;
	else
	{  
	   return a*pow(a,b-1);
    }
}
int main()
{  int a,b;
   printf("Enter Numbers:");
   scanf("%d%d",&a,&b);
   printf("%d",pow(a,b));
   return 0;	
}
