#include<stdio.h>
int main(){
   int a=5;
   int sum=0;
   for(int i=1;i<=a;i++){
    
    printf("%d\n",i);
     sum+=i;
     
   }
   printf("Total sum:%d\n",sum);
   return 0;
}