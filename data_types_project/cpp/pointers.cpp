#include <iostream>
using namespace std;

int main() {
    int number = 50;
    int* pointer = &number;
    int& reference = number;

    cout << "Original value: " << number << endl;
    cout << "Memory address: " << pointer << endl;
    cout << "Value through pointer: " << *pointer << endl;
    cout << "Value through reference: " << reference << endl;

    return 0;
}