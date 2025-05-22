use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let values:Vec<i32> = s
        .as_mut_str()
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();

    if values[0] % 4 == 0 && values[0] % 100 != 0 {
        println!("1");
    }
    else if values[0] % 400 == 0 {
        println!("1");
    }
    else{
        println!("0");
    }
}
