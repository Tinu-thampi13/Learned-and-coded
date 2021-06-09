#include<stdio.h>

int main(){

    int num1, num2, sum;
    printf("Enter the number 1 & 2 \n");
    scanf("%d %d",&num1, &num2);
    sum= num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);
    
    return 0;
}