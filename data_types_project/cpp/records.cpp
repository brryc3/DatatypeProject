#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
};

int main() {
    Student student = {"Bryce", 1001};

    cout << "Student Name: " << student.name << endl;
    cout << "Student ID: " << student.id << endl;

    return 0;
}