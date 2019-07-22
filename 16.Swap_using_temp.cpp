#include<iostream>
usig namespace std;
int main()
{
  int  a,b;
  cin>>a>>b;
  cout<<"Before Swapping :"<<a<<" "<<b;
  int temp=a;
  a=b;
  b=temp;
  cout<<"After Swapping: "<<a<<" "<<b;
  return 0;
}
