#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value for no of rows\t");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=a;j++){
            printf("*");
        }
    } printf("\n");
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int i, j, N;

//     /* Input number of rows from user */
//     printf("Enter number of rows: ");
//     scanf("%d", &N);

//     /* Iterate through N rows */
//     for(i=1; i<=N; i++)
//     {
//         /* Iterate over columns */
//         for(j=1; j<=N; j++)
//         {
//             /* Print star for each column */
//             printf("*");
//         }
        
//         /* Move to the next line/row */
//         printf("\n");
//     }

//     return 0;
// }