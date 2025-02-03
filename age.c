#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age<=12){
        printf("You Are A Child and Get 50 percent discount");
    }
    else if (age>12 && age<18){
        printf("You Are Teenager");
    }
    
    
    else if (age>60){
        printf("You are Senior citizen and get 30 percentage discount");
    }
     else if (age==18){
        printf("Get the 20 percentage discount");
     }
      else if (age>18){
        printf("You are an adult");
    }
    else{
        printf("No discount");

    }
return 0;
}