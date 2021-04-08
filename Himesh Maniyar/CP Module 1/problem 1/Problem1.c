#include<stdio.h>

void main()
{
	int a,b,sum1,diff1;
	float c,d,sum2,diff2;
	printf("Enter the first integer number:  ");
	scanf("%d",&a);
	printf("Enter the second integer number:  ");
	scanf("%d",&b);
	printf("Enter the first float number:  ");
	scanf("%f",&c);
	printf("Enter the second float number:  ");
	scanf("%f",&d);
	sum1=a+b;
	diff1=a-b;
	sum2=c+d;
	diff2=c-d;
	printf("Sum of integer: %d, Difference of integer: %d",sum1,diff1);
	printf("\nSum of float: %1.1f, Difference of float: %1.1f",sum2,diff2);
}
