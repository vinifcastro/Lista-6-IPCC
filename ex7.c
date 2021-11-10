#include <stdio.h>

#define N 6

int main(){
    int x[N][N], maior, j, i, somaatual;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &x[i][j]);
    for (i = 1; i < N-1; i++){
        for (j = 1; j < N-1; j++){
            somaatual = x[i][j] + x[i-1][j] + x[i-1][j+1] + x[i-1][j-1] + x[i+1][j] + x[i+1][j+1] + x[i+1][j-1];
            if (i == 1 && j == 1) maior = somaatual; 
            if (somaatual > maior) maior = somaatual;      
        }
    }
    printf("%d\n", maior);
    return 0;
}