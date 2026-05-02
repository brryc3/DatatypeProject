struct Student {
    name: String,
    id: i32,
}

fn main() {
    let student = Student {
        name: String::from("Bryce"),
        id: 1001,
    };

    println!("Student Name: {}", student.name);
    println!("Student ID: {}", student.id);
}