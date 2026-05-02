fn main() {
    let number: i32 = 10;
    let converted: f32 = number as f32;

    println!("Integer: {}", number);
    println!("Converted to float: {}", converted);

    // Invalid operation example:
    // let result = "Age: " + number;

    println!("Rust requires explicit type conversion.");
}