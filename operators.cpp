#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;


    //Arithmetic Operators
    
    cout << "Sum: " << (a + b) << endl; // Sum operator gives the result of adding 'a' and 'b'
    cout << "Difference: " << (a - b) << endl; // Difference operator gives the result of subtracting 'b' from 'a'
    cout << "Product: " << (a * b) << endl; // Product operator gives the result of multiplying 'a' and 'b'
    cout << "Division: " << (a / b) << endl; // Division operator gives the quotient of the division
    cout << "Modulus: " << (a % b) << endl; // Modulus operator gives the remainder of the division

    //Unary Operators
    cout << "Increment: " << (++a) << endl; // Incrementing 'a' before printing
    cout << "Decrement: " << (--b) << endl; // Decrementing 'b' before printing


    //Relational Operators
    cout << "Is a equal to b? " << (a == b) << endl; // Checks if 'a' is equal to 'b'
    cout << "Is a not equal to b? " << (a != b) << endl; // Checks if 'a' is not equal to 'b', here "!=" is the not equal to operator
    cout << "Is a greater than b? " << (a > b) << endl; // Checks if 'a' is greater than 'b'
    cout << "Is a less than b? " << (a < b) << endl; // Checks if 'a' is less than 'b'
    cout << "Is a greater than or equal to b? " << (a >= b) << endl; // Checks if 'a' is greater than or equal to 'b'
    cout << "Is a less than or equal to b? " << (a <= b) << endl; // Checks if 'a' is less than or equal to 'b'

    //Logical Operators
    cout << "Logical AND (a && b): " << (a && b) << endl; // Logical AND operator returns true if both 'a' and 'b' are non-zero
    cout << "Logical OR (a || b): " << (a || b) << endl; // Logical OR operator returns true if either 'a' or 'b' is non-zero
    cout << "Logical NOT (!a): " << (!a) << endl; // Logical NOT operator returns true if 'a' is zero

    return 0;
}