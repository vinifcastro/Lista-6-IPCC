#include <stdio.h>

#define NC 6

void le_mat(int M[][NC], int l, int c);

void ganhadores(int M[][NC], int n, int * x);

int main(){
    int n, i, loteria[50001][NC], ganhadoress[3];
    ganhadoress[0] = ganhadoress[1] = ganhadoress[2] = 0;
    scanf("%d", &n);
    le_mat(loteria, n+1, 6);
    ganhadores(loteria, n, ganhadoress);
    if (ganhadoress[2]==0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n", ganhadoress[2]);
    if (ganhadoress[1]==0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n", ganhadoress[1]);
    if (ganhadoress[0]==0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", ganhadoress[0]);
    return 0;
}

void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%d", &M[i][k]);
}

void ganhadores(int M[][NC], int n, int * x){
    int i, k, z, seq;
    for (i=0; i<n; i++){
        seq=0;
        for (k=0; k<6; k++){
            for(z=0; z<6; z++){
                if (M[n][z]==M[i][k]){
                    seq++;
                    z=6;
                }
            }
        }
        if (seq==4) x[0]++;
        else if (seq==5) x[1]++;
        else if (seq==6) x[2]++;
    }
}