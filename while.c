#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int sum = 0;

    while (a > 0) {
        sum += a % 10;  
        a /= 10;        
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
