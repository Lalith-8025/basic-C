#include<stdio.h>
int main(){
    int num;
    printf("enter the integer:");
    scanf("%d",&num);
    if(num>0){
        printf("%d the number is positive:\n",num);
        if (num % 2 == 0) {
        printf("%d is Even\n", num);
        }else {
        printf("%d is Odd\n", num);
        }
    }
    else if(num<0){
        printf("%d the number is negative:\n",num);
        if (num % 5 == 0){
            printf("%d is divisible by 5\n", num);
        } else {
        printf("%d is not divisible by 5\n", num);
        }

    }
    else{
        printf("The Given Number is zero\n");
    }
    return 0;
}