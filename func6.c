#include<stdio.h>
int a,b,c,total;

int sum(int);

 int main(){
    int a;

    printf("Enter a three-digit number:");
    scanf("%d",&a);

 

 

    printf("The sum is: %d\n", sum(a));
    return 0;
 }

 int sum(int i){
    a=i/100;
    b=(i/10)%10 ;
    c=i%10;

    total=a+b+c;
    return total;


}