#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;

    scores["Alice"] = 95;
    scores["Bob"] = 82;
    scores["Charlie"] = 74;

    for (auto pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}