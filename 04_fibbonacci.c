#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);    // 50 0101000   
	int f=0,s=1;
	if(num==1)printf("%d",0);
	else if(num==2)printf("%d %d",0,1);
	else 
	{ printf("%d %d",0,1);
	  num-=2;
	 while(num--)
	  {
		int t=f+s;
		printf(" %d",t);
		f=s;
		s=t;
	 }
    }
	 return 0;
}
