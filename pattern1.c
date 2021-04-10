#include <stdio.h>
int main()
{
    int n = 1, no_rows, row, column;
    printf("Enter the no of rows");
    scanf("%d", &no_rows);

    for (row = 1; row <= no_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}