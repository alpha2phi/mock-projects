use std::error::Error;

pub fn add(x:u8, y: u8) -> Result<u8, Box<dyn Error>> {
    Ok(x + y)
}

pub fn multiply(x:u8, y: u8) -> Result<u8, Box<dyn Error>> {
    Ok(x * y)
}
