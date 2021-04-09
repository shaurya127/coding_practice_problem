#include<stdio.h>

void main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("The value after multiplying a and b is: %d",mul(a,b));
}

int mul(int a,int b){
    return a*b;
}
