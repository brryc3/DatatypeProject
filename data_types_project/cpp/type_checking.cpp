#include <iostream>
#include <string>
using namespace std;

int main() {
    int number = 10;

    // Uncommenting the line below causes a compile-time error.
    // number = "hello";

    cout << "C++ does not allow assigning a string to an int." << endl;
    cout << "Number: " << number << endl;

    return 0;
}