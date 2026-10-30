#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    // Method 1: Using static_cast<int> (Recommended C++ style)
    cout << "ASCII value: " << static_cast<int>(character) << endl;

    return 0;
}
