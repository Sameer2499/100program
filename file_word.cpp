#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str,rev;
	cin>>str;
	int l=str.length(),j=0;
	for(int i=l;i>-1;i--)
	{
		rev[j]=str[i];
		j++;
	}
	for(int i=1;i<=l;i++)
	{
		cout<<rev[i];
	}
  	return 0;
}
