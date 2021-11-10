#include <stdio.h>

#define N 2

int main(){
    int x[N][N], j, i;
    double det;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &x[i][j]);
    det = (double)x[0][0]*x[1][1]-(x[0][1]*x[1][0]);
    printf("%.2lf\n", det);    
    return 0;
}