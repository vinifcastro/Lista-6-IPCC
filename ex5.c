#include <stdio.h>

#define N 30

int main(){
    int i, j, m, n, x, y;
    scanf ("%d %d", &m, &n);
    for (i=0; i<m; i++){
        if (i%2 == 0){
            x = 1;
            y = 0;
        }
        else{
            x = 0;
            y = 1;
        }
        for (j=0; j<n; j++){
            if(j%2==0) printf("%d", x);
            else printf("%d", y);
        }
        printf("\n");
    }
    return 0;
}