#include <stdio.h>

#define NC 100

/**
 * @brief Faz a leitura de uma matriz de inteiros.
 * 
 * @param M Matriz de inteiros.
 * @param l Numero de linhas.
 * @param c Numero de colunas.
 */
void le_mat(int M[][NC], int l, int c);

/**
 * @brief CONTA QUANTAS VEZES UM NÚMERO APARECE EM UMA MATRIZ
 * 
 * @param M MATRIZ A SER ANALISADA
 * @param x NÚMERO A SER CONTADO
 * @param m QTD LINHAS
 * @param n QTD COLUNAS
 * @return RETORNA A QTD DE VEZES QUE O NUMERO X APARECE NA MATRIZ
 */
int qtdvezesnum_mat(int M[][NC], int x, int m, int n);

/**
 * @brief ANALISA QUAL É O MAIOR E O MENOR NUMERO DE UMA MATRIZ;
 * 
 * @param M MATRIZ A SER ANALISADA
 * @param m QTD LINHAS
 * @param n QTD COLUNAS 
 * @param z VETOR QUE ARMAZENARÁ O MAIOR E O MENOR VALOR
 */
void identify_maior_menor(int M[][NC], int m, int n, int * z);

int main(){
    int mat[NC][NC], m, n, mm[2];
    scanf("%d %d", &m, &n);
    le_mat(mat, m, n);
    identify_maior_menor(mat, m, n, mm);
    printf("%d %.2lf%%\n", mm[0], ((double)qtdvezesnum_mat(mat, mm[0], m, n)/(double)(m*n))*100);
    printf("%d %.2lf%%\n", mm[1], ((double)qtdvezesnum_mat(mat, mm[1], m, n)/(double)(m*n))*100);
    return 0;
}

void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%d", &M[i][k]);
}

void identify_maior_menor(int M[][NC], int m, int n, int * z){
    int i, k, y;
    y=M[0][0];
    for (i=0; i<m; i++) {
        for (k=0; k<n; k++) {
            if (M[i][k]<y) y=M[i][k];
        }
    }
    z[0] = y;
    y=M[0][0];
    for (i=0; i<m; i++) {
        for (k=0; k<n; k++) {
            if (M[i][k]>y) y=M[i][k];
        }
    }
    z[1] = y;
}

int qtdvezesnum_mat(int M[][NC], int x, int m, int n){
    int i, k, seq=0;
    for (i=0; i<m; i++)
        for (k=0; k<n; k++)
            if (M[i][k]==x) seq++;
    return seq;
}