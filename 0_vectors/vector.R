# Heru Handika
# 13 November 2020
# Vector operation

# Test data
x <- c(1, 2, 3, 4, 5)
y <- c(10, 20, 30, 40, 50)

# Vector addition
add_vec <- x + y
add_vec

# subtract vector
sub_vec <- x - y
sub_vec

# vector multiplication
mul_vec <- x * y
mul_vec

# Vector summation
sum(x)

# Vector mean
mean(x)

# Dot product
dot_product <- function(x, y) {
  return (sum(x * y))
}

dot_product(x,y)

# Compute sum of square
sum_of_square <- function(x){
  return (sum(dot_product(x,x)))
}

sum_of_square(x)

# Compute magnitude
magnitude <- function(x) {
  return (sqrt(sum_of_square(x)))
}

magnitude(x)

# Vector distance
dist <- function(x, y) {
  return (magnitude(x-y))
}

dist(x,y)
