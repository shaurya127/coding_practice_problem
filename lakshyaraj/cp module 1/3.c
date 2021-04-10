#include<stdio.h>

int multiplication(int num1, int num2)
{
    return num1*num2;
}

int main()
{
    int a,b,pro;
    printf("enter two integer\n");
    scanf("%d %d",&a , &b);
    printf("multiplication of %d and %d is %d", a, b, multiplication(a,b));
    return 0;
    
}
