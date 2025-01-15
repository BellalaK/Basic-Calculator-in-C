#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int y;
    char op;
    int a;

    printf("Welcome to Bella's Basic Calculator\n");

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("\nEnter your operator: ");
    scanf(" %c", &op); 

    printf("\nEnter the second number: ");
    scanf("%d", &y);

    switch (op) {
        case 'x': case '*':
            a = x * y;
            break;
        case '/':
            a = x / y;
            break;
        case '+':
            a = x + y;
            break;
        case '-':
            a = x - y;
            break;
        default:
            printf("Invalid Operator. Please Try Again.");
    }

    printf("\nAnswer: %d ", a);

    return 0;
}