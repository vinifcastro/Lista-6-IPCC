#include <stdio.h>

#define N 100

int main(){
    int m, n, i, j, seq=1, x;
    scanf("%d %d", &m, &n);
    for (i=0; i<m; i++){
        if (i%2==0) x=1;
        else x=0;
        for (j=0; j<n; j++){
            if (x==1){
                if (j%2==0){
                    printf("0 ");
                }
                else{
                    printf("%d ", seq);
                    seq++;
                }
            }
            if (x==0){
                if (j%2==0){
                    printf("%d ", seq);
                    seq++;
                }
                else{
                    printf("0 ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}