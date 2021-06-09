#include<stdio.h>

int main(){

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if(num<0)
        goto END;
    
    if(num%2==0)
        printf("EVEN\n");

    else
        printf("ODD\n");
    
    END: printf("END");

}