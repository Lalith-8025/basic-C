#include <stdio.h>

// Function declarations
int add(int num1, int num2);
int diff(int num1, int num2);
int multi(int num1, int num2);
int div(int num1, int num2);

int main() {
    int x, y;
    char z;
    
    // Getting user input
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &z);  // Space before %c to consume newline character

    int res;
    float res_div;
    
    switch (z) {
        case '+':
            res = add(x, y);
            printf("The sum: %d\n", res);
            break;
        case '-':
            res = diff(x, y);
            printf("The difference: %d\n", res);
            break;
        case '*':
            res = multi(x, y);
            printf("The product: %d\n", res);
            break;
        case '/':
            if (y != 0) {
                res_div = (float)x / y;  // Cast to float for division
                printf("The result: %.2f\n", res_div);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
    }


    return 0;
}

// Function definitions
int add(int num1, int num2) {
    return num1 + num2;
}

int diff(int num1, int num2) {
    return num1 - num2;
}

int multi(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}
