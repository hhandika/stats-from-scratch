# Statistics from Scratch

This is my pandemic mood-driven project aimed for teaching myself the fundamental of statistics. The goal is to implement statistical computation in multiple programming languages that I am comfortable on using. This way it will give me enough repetition to understand the concept. That is the phylosophy behind it. The truth, though, I just need a little distraction during this pandemic madness.

There is no deadline when I will finish it. There is no guarantee I will finish it either. Nonetheless, I do hope that this library will serve these purposes someday:

1. As a teaching material, at least for me. Other people are also welcome to use it.
2. A reference for other people who interested on learning statistics through code.
3. A code reference for the future me, and maybe for those who already knew statistics.
4. As experimental code to compare performance among the programming languages and different methods used in the same languages.

Of course, I will be grateful if it can be used beyond those goals.

## Implementation

<!-- Need update! -->

| Computation        | C   | C++ | Rust | Go  | TypeScript/JavaScript | Python | Julia | R   |
| ------------------ | --- | --- | ---- | --- | --------------------- | ------ | ----- | --- |
| _Vector Operation_ |     |     |      |     |                       |        |       |     |
| - Addition         | ✔   | ✔   | ✔    | ✔   | ✔                     | ✔      |       | ✔   |
| - Substraction     | ✔   | ✔   | ✔    | ✔   | ✔                     | ✔      |       | ✔   |
| - Multiplication   | ✔   | ✔   | ✔    | ✔   |                       | ✔      |       | ✔   |
| - Summation        | ✔   | ✔   | ✔    | ✔   | ✔                     | ✔      |       | ✔   |
| - Cumulative sum   | ✔   | ✔   | ✔    | ✔   |                       |        |       |     |
| - Mean             | ✔   | ✔   | ✔    | ✔   |                       | ✔      |       | ✔   |
| - Dot product      | ✔   |     | ✔    |     |                       | ✔      |       | ✔   |
| - Sum of square    | ✔   |     | ✔    |     |                       | ✔      |       | ✔   |
| - Magnitude        | ✔   |     | ✔    |     |                       |        |       | ✔   |
| - Distance         | ✔   |     | ✔    |     |                       |        |       | ✔   |
| _Matrix Operation_ |     |     |      |     |                       |        |       |     |
| - Identity matrix  | ✔   |     | ✔    |     | ✔                     |        |       | ✔   |
| _Central Tendency_ |     |     |      |     |                       |        |       |     |
| - Sort             | ✔   |     | ✔    |     |                       |        |       |     |
| - Mean             | ✔   |     | ✔    |     |                       |        |       |     |
| - Geometric mean   | ✔✔  |     | ✔✔   |     |                       |        |       |     |
| - Median           | ✔   |     | ✔    |     |                       |        |       |     |
| - Quantile         | ✔   |     | ✔    |     |                       |        |       |     |
| _Dispersion_       |     |     |      |     |                       |        |       |     |
| - Min              | ✔   |     | ✔    |     |                       |        |       |     |
| - Max              | ✔   |     | ✔    |     |                       |        |       |     |
| - Range            | ✔   |     | ✔    |     |                       |        |       |     |
| - Variance         | ✔   |     |      |     |                       |        |       |     |
| - Std deviation    | ✔   |     |      |     |                       |        |       |     |
| - Std error        | ✔   |     |      |     |                       |        |       |     |
| Euler number       | ✔   | ✔   | ✔    | ✔   | ✔                     | ✔      | ✔     |     |

## State of Code

The code is still at its infancy. Please, expect significant re-structuring and refactoring of the code. I tend to write C code first and continue with Rust. The rest of the languange implementation will come in a random order depending on my mood that day. Usually, higher level languages will show up later in the process.

## References:

Deisenroth, M.P., Faisal, A.A. and Ong, C.S., 2020. _Mathematics for machine learning_. Cambridge University Press.

Grus, J., 2019. _Data science from scratch: first principles with python_. O'Reilly Media.

Press, W.H., Teukolsky, S.A., Vetterling, W.T. and Flannery, B.P., 2007. Numerical recipes 3rd edition: The art of scientific computing. Cambridge university press.
