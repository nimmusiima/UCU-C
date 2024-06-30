// Date: 30th June, 2024
// Author: Abangira Precious Nimmusiima

#include <stdio.h>
#include <math.h> 

int main() {

    //Declaration of some data types going to be used all through the code.
    int x, A, B, C;
    
    //1: Even or Odd
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d is even\n", x);
    } else {
        printf("%d is odd\n", x);
    }

    //2: Biggest Number and by how much
    int difference;
    printf("Enter two numbers (A and B): ");
    scanf("%d %d", &A, &B);

    if (A > B) {
        difference = A - B;
        printf("%d is bigger than %d by %d\n", A, B, difference);
    } else if (A < B) {
        difference = B - A;
        printf("%d is bigger than %d and the difference is %d\n", B, A, difference);
    } else {
        printf("%d and %d are equal numbers\n", A, B);
    }

    // 3: Factor Check (a/b)
    A = B = 0; 
    printf("Enter two numbers (A and B): ");
    scanf("%d %d", &A, &B);

    if (B % A == 0) {
        printf("%d is a factor of %d\n", A, B);
    } else {
        printf("%d is not a factor of %d\n", A, B);
    }

    //4: Perfect Square or not?
    x = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    double squareRoot = sqrt(x);

    if (floor(squareRoot) == squareRoot) {
        printf("%d is a perfect square. Its square root is %.2lf\n", x, squareRoot);
    } else {
        printf("%d is not a perfect square. Its square root is approximately %.2lf\n", x, squareRoot);
    }

    //5: Unique or not?
    A = B = C = 0; //learned this cool trick to reset all variables so i could reuse them efficiently. Thought I'd try it here.
    printf("Enter three numbers (A, B, and C): ");
    scanf("%d %d %d", &A, &B, &C);

    if (A != B && A != C && B != C) {
        printf("The three numbers (%d, %d, %d) are all unique\n", A, B, C);
    } else {
        printf("The three numbers are not all unique\n");
    }

    return 0;
}
