use std::fs::File;
use std::io::{self, BufRead, BufReader, Write};

enum Category {
    Fail,
    Pass,
    Distinction,
}

struct Student {
    id: i32,
    name: String,
    grades: Vec<f64>,
}

fn is_valid_grade(grade: f64) -> bool {
    grade >= 0.0 && grade <= 100.0
}

fn categorize(average: f64) -> Category {
    if average < 50.0 {
        Category::Fail
    } else if average < 80.0 {
        Category::Pass
    } else {
        Category::Distinction
    }
}

fn category_to_string(category: Category) -> &'static str {
    match category {
        Category::Fail => "Fail",
        Category::Pass => "Pass",
        Category::Distinction => "Distinction",
    }
}

fn main() -> io::Result<()> {
    let input_file = File::open("../students.csv")?;
    let reader = BufReader::new(input_file);
    let mut output_file = File::create("../summary.txt")?;

    println!("name,average,category");
    writeln!(output_file, "name,average,category")?;

    for (index, line) in reader.lines().enumerate() {
        let line = line?;

        if index == 0 {
            continue;
        }

        let parts: Vec<&str> = line.split(',').collect();

        let student = Student {
            id: parts[0].parse().unwrap(),
            name: parts[1].to_string(),
            grades: vec![
                parts[2].parse().unwrap(),
                parts[3].parse().unwrap(),
                parts[4].parse().unwrap(),
            ],
        };

        let valid = student.grades.iter().all(|grade| is_valid_grade(*grade));

        if !valid {
            println!("{},Invalid Grade,Skipped", student.name);
            writeln!(output_file, "{},Invalid Grade,Skipped", student.name)?;
            continue;
        }

        let total: f64 = student.grades.iter().sum();
        let average = total / student.grades.len() as f64;
        let category = category_to_string(categorize(average));

        println!("{},{:.2},{}", student.name, average, category);
        writeln!(output_file, "{},{:.2},{}", student.name, average, category)?;
    }

    Ok(())
}
