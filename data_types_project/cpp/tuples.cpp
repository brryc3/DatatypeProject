#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    tuple<string, int, double> person = make_tuple("Bryce", 21, 3.5);

    cout << "Name: " << get<0>(person) << endl;
    cout << "Age: " << get<1>(person) << endl;
    cout << "GPA: " << get<2>(person) << endl;

    return 0;
}