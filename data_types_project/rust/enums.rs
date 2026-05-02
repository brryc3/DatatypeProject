#[derive(Debug)]
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
}

fn main() {
    let today = Day::Wednesday;

    println!("Enum value: {:?}", today);
}