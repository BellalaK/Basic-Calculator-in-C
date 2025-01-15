#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    //int* xPtr = (int*) malloc(x*sizeof(int));

    int y;
    //int* yPtr = (int*) malloc(y*sizeof(int));

    char op;
    //int* opPtr = (int*) malloc(sizeof(op)*sizeof(char));

    int a;
    //int* aPtr = (int*) malloc(a*sizeof(int));

    printf("Welcome to Bella's Basic Calculator\n");

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("\nEnter your operator: ");
    scanf("%c", &op); 

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

    return 0;
}