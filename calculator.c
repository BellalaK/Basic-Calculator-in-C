#include <stdio.h>
#include <stdlib.h>

void mult(float x, float y, float* a) {
    *a = x * y;
}

void divide(float num, float denom, float* a) {
    *a = num / denom;
}

void add(float x, float y, float* a) {
    *a = x+y;
}

void sub(float x, float y, float* a) {
    *a = x-y;
}

int main() {
    float x;
    float y;
    char op;
    float a;

    printf("Welcome to Bella's Basic Calculator\n");

    printf("Enter the first number: ");
    scanf("%f", &x);

    printf("\nEnter your operator: ");
    scanf(" %c", &op); 

    printf("\nEnter the second number: ");
    scanf("%f", &y);

    switch (op) {
        case 'x': case '*':
            mult(x,y, &a);
            break;
        case '/':
            divide(x,y, &a);
            break;
        case '+':
            add(x,y, &a);
            break;
        case '-':
            sub(x,y, &a);
            break;
        default:
            printf("Invalid Operator. Please Try Again.");
    }

    printf("\nAnswer: %f ", a);
    return 0;
}