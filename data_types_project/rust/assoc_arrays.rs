use std::collections::HashMap;

fn main() {
    let mut scores = HashMap::new();

    scores.insert("Alice", 95);
    scores.insert("Bob", 82);
    scores.insert("Charlie", 74);

    for (name, score) in &scores {
        println!("{}: {}", name, score);
    }
}