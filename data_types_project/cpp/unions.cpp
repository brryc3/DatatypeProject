#include <iostream>
using namespace std;

union Number {
    int intValue;
    float floatValue;
};

int main() {
    Number number;

    number.intValue = 25;
    cout << "Integer value: " << number.intValue << endl;

    number.floatValue = 3.14;
    cout << "Float value: " << number.floatValue << endl;

    return 0;
}