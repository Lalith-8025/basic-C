#include<stdio.h>

int num,a,b,c,d,rev;
int reversed(int);

int main(){
    int num;
    printf("Enter four digit number:");
    scanf("%d",&num);

    printf("The reversed number:%d\n", reversed(num));
    
    return 0;
}

int reversed(int num){
    a=num/1000;
    b=(num/100)%10;
    c=(num/10)%10;
    d=num%10;

    rev=(a*1000)+(b*100)+(d*10)+c;
    return rev;
    
}