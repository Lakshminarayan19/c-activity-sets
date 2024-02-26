#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int number;
    int result;

   
    number = input_number();

    
    result = is_composite(number);

    
    output(number, result);

    return 0;
}

int input_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}


int is_composite(int n) {
    int i;
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 1; 
        }
    }
    return 0; 
}


void output(int n, int result) {
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}
