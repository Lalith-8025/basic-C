#include<stdio.h>

int check(int num1 ,int num2 ,int num3);

int main(){
    int a , b , c;
    printf("Enter Num1:");
    scanf("%d",&a);
    printf("Enter Num2:");
    scanf("%d",&b);
    printf("Enter Num3:");
    scanf("%d",&c);

    printf("The Greatest number is:%d",check(a,b,c));

    return 0;

}

int check(int num1 , int num2 , int num3){
    if (num1>num2 && num1>num3){
        return num1;
    }
    else if ( num2>num1 && num2>num3){
        return num2;        
    }
    else{
        return num3;
        
    }
    
}