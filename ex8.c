#include <stdio.h>

#define MAX 100

int main(){
    int j, i, m, n, tb, cb;
    scanf("%d %d %d %d", &m, &n, &tb, &cb);
    printf("P2\n");
    printf("%d %d\n", n, m);
    printf("255\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i >= (m-tb) || i <= tb-1 || j >= (n-tb) || j <= tb-1) printf("%d ", cb);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}