#include <iostream.h>

#include <conio.h>

int gcd(int x, int y);

void main()

{

int a, b;

cout<<"Enter an integer: ";

cin>>a;

cout<<"Enter an integer: ";

cin>>b;

cout<<"Greatest common divisor is "<<gcd(a, b)<<endl;

getch();

}

int gcd(int x, int y)

{

int g, i, n;

if(x < y)

n = x;
