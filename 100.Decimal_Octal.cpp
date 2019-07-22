#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int oct=0;
	while(m)
	{
		int d=m%8;
		oct=oct*10+d;
		m/=8;
	}
	cout<<"Octal:"<<oct;
	return 0;
}
