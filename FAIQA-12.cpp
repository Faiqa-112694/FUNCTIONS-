#include <iostream>
using namespace std;

char determineGrade(int marks);

int main() {
    int marks;
    char grade;


    cout << "Enter the marks: ";
    cin >> marks;

 
    grade = determineGrade(marks);


    cout << "The grade is: " << grade << endl;

    return 0;
}


char determineGrade(int marks) {
    if (marks >= 80) {
        return 'A';
    } else if (marks >= 60) {
        return 'B';
    } else if (marks >= 40) {
        return 'C';
    } else {
        return 'F';
    }
}
