#include <stdio.h>
int main()
{
    int i, testcase, row, column, total_row, total_column;
    printf("Enter test case");
    scanf("%d", &testcase);
    for (i = 1; i <= testcase; i++)
    {
        printf("Enter the number of rows and columns");
        scanf("%d %d", &total_row, &total_column);

        for (row = 1; row <= total_row; row++)
        {
            for (column = 1; column <= total_column; column++)
            {
                if (row % 2 != 0 && column % 2 != 0)
                    printf("*");
                else if (row % 2 != 0 && column % 2 == 0)
                    printf(".");
                else if (row % 2 == 0 && column % 2 != 0)
                    printf(".");
                else if (row % 2 == 0 && column % 2 == 0)
                    printf("*");
            }
            printf("\n");
        }
    }
}