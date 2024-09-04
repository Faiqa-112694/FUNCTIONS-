#include <iostream.h>

#include <conio.h>

int sqr(int n);

int cube(int n);

void main() {

int a, b, r;

cout<<"Enter an integer: "; cin>>a; cout<<"Enter an integer: "; cin>>b; r = sqr(a) + cube(b); cout<<"Result = "<<r<<endl; getch(); } int sqr(int n) { return n*n;

}

int cube(int n)

{

return n*n*n;

}
