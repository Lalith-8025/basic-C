#include<stdio.h>
int a,b,c,reversed;

int sum(int);

 int main(){
    int a;

    printf("Enter a three-digit number:");
    scanf("%d",&a);

 

 

    printf("The rev number is: %d\n", sum(a));
    return 0;
 }

 int sum(int i){
    a=i/100;
    b=(i/10)%10 ;
    c=i%10;

    reversed=(c*100)+(b*10)+a;
    return reversed;


}