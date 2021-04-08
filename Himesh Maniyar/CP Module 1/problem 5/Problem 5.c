//Submitted by Himesh Maniyar

#include<stdio.h>
#include<math.h>
void main()
{
    int num,revNum=0,digit=0,numCopy,no_of_digits=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    numCopy=num;
    //To find number of digits of given number
    while(numCopy!=0){
        ++no_of_digits;
        numCopy/=10;
    }
    numCopy=num;

    //To find reversed number
    while(numCopy!=0){
        digit=numCopy%10;
        revNum+=digit*pow(10,(no_of_digits-1));
        --no_of_digits;
        numCopy/=10;
    }
    printf("\nReversed number is: %d",revNum);
    if(revNum==num){
        printf("\n\nThe number is palindrome\n");
    }
    else printf("\n\nThe number is not palindrome\n");

}
