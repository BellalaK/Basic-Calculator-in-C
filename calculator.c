#include <stdio.h>
#include <stdlib.h>

float mult(float x, float y) {
    float a = x * y;
    return a;
}

float divide(float num, float denom) {
    float a = num / denom;
    return a;
}

float add(float x, float y) {
    float a = x+y;
    return a;
}

float sub(float x, float y) {
    float a = x-y;
    return a;
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
            mult(x,y);
            break;
        case '/':
            divide(x,y);
            break;
        case '+':
            add(x,y);
            break;
        case '-':
            sub(x,y);
            break;
        default:
            printf("Invalid Operator. Please Try Again.");
    }

    printf("\nAnswer: %f ", a);

    return 0;
}