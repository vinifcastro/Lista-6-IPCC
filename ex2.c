#include <stdio.h>
 
#define N 100
 
int main(){
    int x[N][N], j, i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &x[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i==j) printf("%d\n", x[i][j]);   
    return 0;
}