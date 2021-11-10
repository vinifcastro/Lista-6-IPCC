#include <stdio.h>

#define N 6

int main(){
    int tabela[N][N] = { {   0 ,  63 , 210 , 190 ,  -1 , 190},
                         {  63 ,   0 , 160 , 150 ,  95 ,  10},
                         { 210 , 160 ,   0 ,  10 ,   1 ,  10},
                         { 190 , 150 ,  10 ,   0 ,  10 ,  20},
                         {  10 ,  95 ,   7 ,  21 ,   0 ,  80},
                         { 190 ,   2 ,  -1 ,  41 ,  80 ,   0}
                        };
    int rota[100], n, i, custo=0;
    scanf("%d", &n);
    for (i=0;i<n;i++) scanf("%d",&rota[i]);
    for (i=0;i<n-1;i++){
        if (tabela[rota[i]][rota[(i+1)]] == -1){
            printf("rota invalia!\n");
            return 0;
        }
        custo += tabela[rota[i]][(rota[(i+1)])];
    }
    printf ("%d\n", custo);
    return 0;
}
