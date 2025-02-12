#include<stdio.h>
int getHundredsDigit(int c){
    return c/10;

}
 int main(){
    int a;

    printf("Enter a three-digit number:");
    scanf("%d",&a);

 

 

    printf("The hundred's digit is: %d\n", getHundredsDigit(a));
    return 0;
 }