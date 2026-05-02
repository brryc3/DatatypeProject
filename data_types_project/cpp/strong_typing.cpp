#include <iostream>
#include <string>
using namespace std;

int main() {
    int number = 10;
    float converted = static_cast<float>(number);

    cout << "Integer: " << number << endl;
    cout << "Converted to float: " << converted << endl;

    // Invalid operation example:
    // string text = "Age: ";
    // cout << text + number << endl;

    cout << "C++ requires correct types or explicit conversion." << endl;

    return 0;
}