#include <stdio.h>
 
#define NC 101
#define NL 101

/**
 * @brief Faz a leitura de uma matriz de inteiros.
 * 
 * @param M Matriz de inteiros.
 * @param l Numero de linhas.
 * @param c Numero de colunas.
 */
void le_mat(int M[][NC], int l, int c);

/**
 * @brief Testa se a cidade é ou não segura.
 * 
 * @param M Matriz de inteiros.
 * @param l Numero de linhas.
 * @param c Numero de colunas.
 */
void cidade_segura(int M[][NC], int l, int c);
 
int main(){
    int cidade[NL][NC], l;
    scanf ("%d", &l);
    le_mat(cidade, l, l);
    cidade_segura(cidade, l, l);
    return 0;
}
 
void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<=l; i++)
        for(k=0; k<=c; k++)
            scanf("%d", &M[i][k]);
}
 
void cidade_segura(int M[][NC], int l, int c){
    int i, k, x;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++){
            x=0;
            if (M[i][k] == 1) x++;
            if (M[i][k+1] == 1) x++;
            if (M[i+1][k] == 1) x++;
            if (M[i+1][k+1] == 1) x++;
            if (x>=2) printf("S");
            else printf("U");
        }
        printf("\n");
    }
}