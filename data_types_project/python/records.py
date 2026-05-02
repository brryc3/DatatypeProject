from dataclasses import dataclass

@dataclass
class Student:
    name: str
    id: int

student = Student("Bryce", 1001)

print("Student Name:", student.name)
print("Student ID:", student.id)