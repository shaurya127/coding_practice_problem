#include <stdio.h>
int main()
{
    int N,column,symbol;
    printf("Enter a number");
    scanf("%d",&N);
     for( column=1;column<=N;column++)
     {
         for( symbol=1;symbol<=column;symbol++)
         {
             printf("*");
         }
         printf(" ");
     }
     return 0;
}