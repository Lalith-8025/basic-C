#include<stdio.h>

int hundreds,tens,ones,rev;

int reversed(int);

int main(){
    int num;

    printf("Enter the three digit number:\n");
    scanf("%d",&num);

    printf("The output is:%d\n", reversed(num));

    return 0;
}


int reversed(int i){

    hundreds=i/100;
    tens=(i/10)%10;
    ones=i%10;
    
    rev=(hundreds*100)+(tens*0)+ones;

    return rev;

}