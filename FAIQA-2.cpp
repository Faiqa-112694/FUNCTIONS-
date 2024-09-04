#include<iostream>
using namespace std;
int max(int a,int b);
int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	max(x,y);
}
int max(int a,int b)
{
	if(a>b)
	cout<<"Maximum number is "<<a;
	else
	cout<<"Maximum number is "<<b;
}