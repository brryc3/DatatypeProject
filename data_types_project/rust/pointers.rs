fn main() {
    let mut number = 50;

    {
        let reference = &mut number;
        *reference += 10;
    }

    println!("Updated value through reference: {}", number);
}