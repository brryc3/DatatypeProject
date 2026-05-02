#include <iostream>
using namespace std;

enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main() {
    Day today = Wednesday;

    cout << "Enum value for Wednesday: " << today << endl;

    return 0;
}