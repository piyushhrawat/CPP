#include <iostream>
using namespace std;

int main() {
    //Ternary Statement
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string isAdult = (age >= 18) ? "Yes" : "No"; // Ternary operator checks if 'age' is greater than or equal to 18, if true assigns "Yes" to 'isAdult', else assigns "No" to 'isAdult'
    cout << "Are you an adult? " << isAdult << endl;
}