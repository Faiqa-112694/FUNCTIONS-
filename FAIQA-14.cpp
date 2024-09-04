#include <iostream>
using namespace std;

double calculateArea(double base, double height);

int main() {
    double base, height, area;


    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    area = calculateArea(base, height);

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}

double calculateArea(double base, double height) {
    return 0.5 * base * height;
}
