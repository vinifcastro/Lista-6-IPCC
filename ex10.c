#include <stdio.h>

#define N 100

int main(){
    int x[100][100];
    int n, i, j, tr=0, z;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &x[i][j]);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i==j) tr+=x[i][j];
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            z = (x[i][j]*tr) + x[j][i];
            printf("%d ", z);
        }
        printf("\n");
    }
    return 0;
}