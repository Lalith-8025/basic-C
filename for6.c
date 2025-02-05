#include<stdio.h>
int main(){
    int i , j;
    printf("Enter the value :");
    scanf("%d", &i);
    printf("Enter the num for multiply :");
    scanf("%d", &j);
    for (int a=1;a<=i;a++){
       printf("%d x %d = %d\n", a, j, a * j);
    }
    return 0;
}