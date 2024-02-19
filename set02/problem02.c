#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int side1, side2, side3;
    int isscalene;

    printf("Enter the three sides of the triangle:\n");
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    isscalene = check_scalene(side1, side2, side3);
    
    output(side1, side2, side3, isscalene);

    return 0;
}

int input_side() {
    int side;
    printf("Enter the side length: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; 
    } else {
        return 0; 
    }
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d, and %d is a scalene triangle.\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d, and %d is not a scalene triangle.\n", a, b, c);
    }
}
