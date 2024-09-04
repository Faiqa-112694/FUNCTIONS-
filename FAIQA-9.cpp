#include <iostream> 
using namespace std;
void cal(int a, int b, char op);
int main() {
int x, y;
char c;
    cout << "Enter the first number. operator and second number:";
    cin >>x>>c>>y;
    cal(x ,y, c);
return 0;
}
void cal(int a, int b, char op)
{
	switch (op) {
        case '+':
            cout << "Result: " << a+b << endl;
            break;
        case '-':
            cout << "Result: " << a-b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
            case '/':
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
            break;
    }
}
