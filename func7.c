#include<stdio.h>
int a,b,reversed;

int sum(int);

 int main(){
    int a;

    printf("Enter a two-digit number:");
    scanf("%d",&a);

 

 

    printf("The rev number is: %d\n", sum(a));
    return 0;
 }

 int sum(int i){
    a=(i/10)%10 ;
    b=i%10;

    reversed=(b*10)+a;
    return reversed;


}