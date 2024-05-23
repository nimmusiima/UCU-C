/*Structured Programming

*****FizzBuzz Assignment*****

Author: Abangira Precious Nimmusiima
Date: 23rd May, 2023
*/

#include <stdio.h>

int main (void)
{

int number;

printf("Enter number: ");
scanf("%d", &number);

// Multiple of 3 print Fizz
if (number%3==0) {
    printf("Fizz \n");
}

// Multiple of 5 print Buzz
else if (number%5==0) {
    printf("Buzz");
}

// Multiple of 7 print Fizzbuzz
else if (number%7==0) {
    printf("FizzBuzz");
}

// If not a multiple of either print the number itself
else {
    printf("%d", number);
}

}