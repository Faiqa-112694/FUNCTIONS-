#include <iostream>
using namespace std;

void printGrid(int size, char character);

int main() {
    int number;
    char character;

    cout << "Enter the size of the grid (number of rows and columns): ";
    cin >> number;

    cout << "Enter a character to fill the grid: ";
    cin >> character;

    printGrid(number, character);

    return 0;
}


void printGrid(int size, char character) {
    for (int i = 0; i < size; ++i) {        
        for (int j = 0; j < size; ++j) {     
            cout << character << ' ';         
        }
        cout << endl;        
    }
}
