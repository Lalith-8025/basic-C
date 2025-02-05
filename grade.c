#include<stdio.h>
int main(){
    int mark;
    printf("Enter the mark:");
    scanf("%d",&mark);
    if (mark>=91 && mark<=100){
        printf("O grade");
    }
    else if (mark>=81 && mark<=90){
        printf("A+ Grade");
    }
    else if (mark>=71 && mark<=80){
        printf("A Grade");
    }
    else if (mark>=61 && mark<=70){
        printf("B+ Grade");
    }
    else{
        printf("B Grade");

    }
return 0;
}