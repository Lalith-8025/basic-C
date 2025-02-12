#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0;i<5;i++){
        printf("Enter the values :%d",i);
        scanf("%d",&arr[i]);

    }
    for(int j=0;j<5;j++){
        printf("The array  :%d\n",arr[j]);
        
    }
return 0;
}