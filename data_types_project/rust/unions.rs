enum Number {
    IntValue(i32),
    FloatValue(f32),
}

fn main() {
    let value1 = Number::IntValue(25);
    let value2 = Number::FloatValue(3.14);

    match value1 {
        Number::IntValue(num) => println!("Integer value: {}", num),
        Number::FloatValue(num) => println!("Float value: {}", num),
    }

    match value2 {
        Number::IntValue(num) => println!("Integer value: {}", num),
        Number::FloatValue(num) => println!("Float value: {}", num),
    }
}