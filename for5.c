#include<stdio.h>
int main(){
    for(int i=1; i<=20;i++){
        if(i%2==1){
            if(i>10){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}