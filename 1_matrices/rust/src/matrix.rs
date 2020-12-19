pub mod matrix {
    pub fn print_matrix(mat: &Vec<Vec<i32>>) {
        for i in mat.iter() {
            println!("{:?}", i);
        }
    }

    pub fn create_identity_matrix(row_size: usize, col_size: usize) -> Vec<Vec<i32>>{
        let mut mat = vec![Vec::with_capacity(row_size); col_size];
        for i in 0..mat.len() {
            for j in 0..mat.len() {
                if i == j {
                    mat[i].push(1);
                } else {
                    mat[i].push(0);
                }
            }
        }
       mat
    }
}



