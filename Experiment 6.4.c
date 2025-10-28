* Experiment 6.4 : WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B.
Read matrix A and matrix B in row major order respectively.
Print both the input matrices and resultant matrix with suitable
headings and output should be in matrix format only.
Program must check the compatibility of orders of the matrices for multiplication.
Report appropriate message in case of incompatibility*/
#include <stdio.h>
int main() {
int m, n, p, q;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1\n");
printf("Enter number of rows and columns of matrix A (m n): ");
scanf("%d %d"
, &m, &n);
printf("Enter number of rows and columns of matrix B (p q): ");
scanf("%d %d"
, &p, &q);
if (n != p) {
printf("Incompatible matrices for multiplication. Number of columns of A must be equal to number of rows of B.\n");
return 1;
}
int A[m][n], B[p][q], C[m][q];
printf("Enter elements of matrix A (%dx%d) in row major order:\n", m, n);
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
scanf("%d"
, &A[i][j]);
printf("Enter elements of matrix B (%dx%d) in row major order:\n", p, q);
for (int i = 0; i < p; i++)
for (int j = 0; j < q; j++)
scanf("%d"
, &B[i][j]);
// Initialize resultant matrix C to 0
for (int i = 0; i < m; i++)
for (int j = 0; j < q; j++)
C[i][j] = 0;
// Multiply matrices
for (int i = 0; i < m; i++) {
for (int j = 0; j < q; j++) {
for (int k = 0; k < n; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}
// Print matrix A
printf("Matrix A (%dx%d):\n", m, n);
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
printf("%d\t"
, A[i][j]);
}
printf("\n");
}
// Print matrix B
printf("Matrix B (%dx%d):\n", p, q);
for (int i = 0; i < p; i++) {
for (int j = 0; j < q; j++) {
printf("%d\t"
, B[i][j]);
}
printf("\n");
}
// Print resultant matrix C
printf("Product matrix C = A x B (%dx%d):\n", m, q);
for (int i = 0; i < m; i++) {
for (int j = 0; j < q; j++) {
printf("%d\t"
, C[i][j]);
}
printf("\n");
}
