use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let values:Vec<i32> = s
        .as_mut_str()
        .split_ascii_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();

    s = String::new();
    io::stdin().read_line(&mut s).unwrap();

    let A:Vec<i32> = s
        .split_ascii_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();

    for i in 0..A.len() {
            if A[i] < values[1] {
                print!("{} ", A[i]);
            
        }
    }
}
