#include <stdio.h>

struct _complex {
    float real, imaginary;
};
typedef struct _complex Complex;

int get_n() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0.0, 0.0};
    for (int i = 0; i < n; ++i) {
        result = add(result, c[i]);
    }
    return result;
}

void output(int n, Complex c[n], Complex result) {
    printf("Sum of %d complex numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("(%.2f + %.2fi) ", c[i].real, c[i].imaginary);
        if (i < n - 1) {
            printf("+ ");
        }
    }
    printf("= %.2f + %.2fi\n", result.real, result.imaginary);
}

int main() {
    int n;
    Complex *complexNumbers, result;
    n = get_n();
    complexNumbers = (Complex *)malloc(n * sizeof(Complex));

    input_n_complex(n, complexNumbers);
    result = add_n_complex(n, complexNumbers);
    output(n, complexNumbers, result);
    free(complexNumbers);

    return 0;
}