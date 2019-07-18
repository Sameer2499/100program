#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string str,rev;
   cin>>str;
   int l=str.length(),j=0;
   for(int i=l;i>=0;i--)
   {
   	  rev[j]=str[i];
   	  j++;
   }
   int f=1;
   for(int i=0;i<l;i++)
   {
   	  if(str[i]!=rev[i])
   	  {
   	  	f=0;
   	  	break;
	  }
   }
   if(f==1)
   {
   	printf("Palindrome\n");
   }
   else
   {
   	printf("Not Palindrome ");
   }
   return 0;
}
