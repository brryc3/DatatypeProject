fn main() {
    let number: i32 = 10;

    // Uncommenting the line below causes a compile-time error.
    // number = "hello";

    println!("Rust does not allow assigning a string to an i32.");
    println!("Number: {}", number);
}