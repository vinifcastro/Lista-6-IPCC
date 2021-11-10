#include <stdio.h>

#define N 10

int main(){
    int i, j, m = 0, n = 0, x[N][N];
    while (m<=0 || m>10) scanf ("%d", &m);
    while (n<=0 || n>10) scanf ("%d", &n);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d", &x[i][j]);
    for (i=0; i<m; i++){
        printf("linha %d: ", i+1);
        for (j=0; j<n; j++){
            if (j==n-1) printf("%d", x[i][j]);
            else printf("%d,", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}