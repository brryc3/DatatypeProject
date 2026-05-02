import csv
from enum import Enum
from dataclasses import dataclass
from typing import List

class Category(Enum):
    FAIL = "Fail"
    PASS = "Pass"
    DISTINCTION = "Distinction"

@dataclass
class Student:
    id: int
    name: str
    grades: List[float]

def is_valid_grade(grade):
    return 0 <= grade <= 100

def categorize(average):
    if average < 50:
        return Category.FAIL.value
    elif average < 80:
        return Category.PASS.value
    else:
        return Category.DISTINCTION.value

with open("students.csv", "r") as input_file, open("summary.txt", "w") as output_file:
    reader = csv.DictReader(input_file)

    print("name,average,category")
    output_file.write("name,average,category\n")

    for row in reader:
        student = Student(
            id=int(row["id"]),
            name=row["name"],
            grades=[
                float(row["grade1"]),
                float(row["grade2"]),
                float(row["grade3"])
            ]
        )

        if not all(is_valid_grade(grade) for grade in student.grades):
            print(f"{student.name},Invalid Grade,Skipped")
            output_file.write(f"{student.name},Invalid Grade,Skipped\n")
            continue

        average = sum(student.grades) / len(student.grades)
        category = categorize(average)

        print(f"{student.name},{average:.2f},{category}")
        output_file.write(f"{student.name},{average:.2f},{category}\n")