#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1-i;j>0;j--)
		{
			cout<<" ";
		}
		int n=pow(11,i);
		while(n>0)
		{
			int d=n%10;
			cout<<d<<" ";
			n/=10;
		}
		cout<<endl;
	}
	return 0;
}
