#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 20, 30};

    numbers.push_back(40);

    for (int number : numbers) {
        cout << number << endl;
    }

    return 0;
}