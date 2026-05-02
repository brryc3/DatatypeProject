fn main() {
    let mut numbers = vec![10, 20, 30];

    numbers.push(40);

    for number in numbers {
        println!("{}", number);
    }
}