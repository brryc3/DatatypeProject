#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

enum Category {
    Fail,
    Pass,
    Distinction
};

struct Student {
    int id;
    string name;
    vector<double> grades;
};

bool isValidGrade(double grade) {
    return grade >= 0 && grade <= 100;
}

string categoryToString(Category category) {
    if (category == Fail) return "Fail";
    if (category == Pass) return "Pass";
    return "Distinction";
}

Category categorize(double average) {
    if (average < 50) return Fail;
    if (average < 80) return Pass;
    return Distinction;
}

int main() {
    ifstream inputFile("students.csv");
    ofstream outputFile("summary.txt");

    if (!inputFile) {
        cout << "Error: Could not open students.csv" << endl;
        return 1;
    }

    string line;
    getline(inputFile, line);

    cout << fixed << setprecision(2);
    outputFile << fixed << setprecision(2);

    cout << "name,average,category" << endl;
    outputFile << "name,average,category" << endl;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string idText, name, gradeText;
        Student student;

        getline(ss, idText, ',');
        getline(ss, name, ',');

        student.id = stoi(idText);
        student.name = name;

        bool valid = true;
        double total = 0;

        for (int i = 0; i < 3; i++) {
            getline(ss, gradeText, ',');
            double grade = stod(gradeText);

            if (!isValidGrade(grade)) {
                valid = false;
            }

            student.grades.push_back(grade);
            total += grade;
        }

        if (!valid) {
            cout << student.name << ",Invalid Grade,Skipped" << endl;
            outputFile << student.name << ",Invalid Grade,Skipped" << endl;
            continue;
        }

        double average = total / student.grades.size();
        string category = categoryToString(categorize(average));

        cout << student.name << "," << average << "," << category << endl;
        outputFile << student.name << "," << average << "," << category << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
