#include<iostream>
using namespace std;
int table(int n);
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	table(num);
}
int table (int n)
{
	int c;
	for(c=1;c<=10;c++)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
	}
}