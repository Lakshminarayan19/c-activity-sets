#include <stdio.h>

// Function to input two numbers
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to find the GCD of two numbers using Euclid's algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to output the result
void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}

// Main function
int main() {
    int num1, num2;
    num1 = input();
    num2 = input();
    int gcd = find_gcd(num1, num2);
    output(num1, num2, gcd);
    return 0;
}
