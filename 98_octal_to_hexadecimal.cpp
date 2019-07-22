#include<stdio.h>
#include<cmath>
int main()
{
	int oct,j=0;
	scanf("%d",&oct);    // 50 0101000   
	int dec=0;
	while(oct)
	{  
		int d=oct%10;
		dec+=d*pow(8,j);
		j++;
		oct/=10;
	}
	//printf("%x\n",dec);
	int hex=0,p=0;
	while(dec)
	{
		int d=dec%16;
		hex+=d*pow(10,p);
		p++;
		dec/=16;
	}
	printf("%d",hex);
	return 0;
}
