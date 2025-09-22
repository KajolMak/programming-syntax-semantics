fn main() {
    let x = vec![1, 2, 3, 4, 5]; // dynamically allocated vector
    let sum = sum_vector(&x); // borrowing
    println!("Sum in Rust: {}", sum);
}

fn sum_vector(v: &Vec<i32>) -> i32 { // borrow to avoid moving
    let mut total = 0;
    for num in v {
        total += num;
    }
    total
}
