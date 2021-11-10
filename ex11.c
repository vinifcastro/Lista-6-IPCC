#include <stdio.h>

#define N 100
#define Wally_MIDDLE 1111
#define Wally_ARM 0
#define Wally_HEAD 4
#define Wally_LEG 8

int main(){
    int i, j, ihead, ileg, irarm, ilarm, x[N][N], m, n;
    scanf("%d %d", &m, &n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(x[i][j] == Wally_MIDDLE){
                ihead = i-1;
                ileg = i+1;
                irarm = j+1;
                ilarm = j-1;
                if (ihead<0) ihead = m-1;
                if (ileg>=m) ileg = 0;
                if (irarm>=n) irarm = 0;
                if (ilarm<0) ilarm = n-1;
                if (x[ihead][j] == Wally_HEAD && x[ileg][j] == Wally_LEG && x[i][irarm] == Wally_ARM && x[i][ilarm] == Wally_ARM){
                    printf("%d %d\n", i, j);
                    return 0;
                }
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
    return 0;
}