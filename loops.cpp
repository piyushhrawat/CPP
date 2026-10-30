#include <iostream>
using namespace std;

// While Loop
void whileLoopExample() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    // While Loop
    while (a <= 10) {
        cout << a << " ";
        a++;

        // if(a%7 == 0) {
        //     break; // Breaks the loop
        // }
    }
    cout << endl;
}

// For Loop
void forLoopExample() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    for (int i = a; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    whileLoopExample();
    forLoopExample();
    return 0;
}
