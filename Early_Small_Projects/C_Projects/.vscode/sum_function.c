#include<stdio.h>

int sum(int a, int b){
    int result;
    result= a + b;
    return result;
}
int main(){
     int c;
     c= sum(2, 100);
     printf("The sum is %d",c);
return 0;
}