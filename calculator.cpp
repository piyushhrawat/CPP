#include <iostream>
using namespace std;

int main() {
    // Store the two operands and the operator selected by the user.
    int a, b;
    string op;

    // Read the numbers to use in the calculation.
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    // Read the arithmetic operation to perform.
    cout << "Enter Operator (+, -, *, /, %): ";
    cin >> op;
    
    // Perform the requested operation and display its result.
    if (op == "+"){
        cout << "Sum: " << (a + b) << endl;
    } else if (op == "-") {
        cout << "Difference: " << (a - b) << endl;
    } else if (op == "*") {
        cout << "Product: " << (a * b) << endl;
    } else if (op == "/") {
        // Avoid dividing by zero.
        if (b != 0) {
            cout << "Division: " << (a / b) << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else if (op == "%") {
        // The modulus operation also requires a nonzero divisor.
        if (b != 0) {
            cout << "Modulus: " << (a % b) << endl;
        } else {
            cout << "Error: Modulus by zero is not allowed." << endl;
        }
    } else {
        // Report operators that are not supported by this calculator.
        cout << "Invalid operator!" << endl;
    }

    // Indicate that the program completed successfully.
    return 0;
}