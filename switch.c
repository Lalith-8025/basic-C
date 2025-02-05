#include<stdio.h>
int main(){
    char operator;
    int num1, num2;
    printf("Enter the operator:");
    scanf("%c",&operator);

    printf("Enter the two numbers:");
    scanf("%d %d", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("Result:\n %d", num1+num2);
        break;
    case '-':
        printf("Result:\n %d", num1-num2);
        break;
    case '*':
        printf("Result:\n %d", num1*num2);
        break;
    case '/':
        printf("Result:\n %d", num1/num2);
        break;
    
    case '%':
        printf("Result:\n %d", num1%num2);
        break;
    
    default:
        printf("Invalid Operator");
        break;
    }



return 0;
    
}