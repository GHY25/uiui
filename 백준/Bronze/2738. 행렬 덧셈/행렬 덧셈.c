#include <stdio.h>

int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int matrix1[n][m];
    int matrix2[n][m];

    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }

    int sum_matrix[n][m];
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            sum_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            printf("%d ",sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}