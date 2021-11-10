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
 * @brief ANALISA QUAL É O MAIOR E O MENOR NUMERO DE UMA MATRIZ;
 * 
 * @param M MATRIZ A SER ANALISADA
 * @param m QTD LINHAS
 * @param n QTD COLUNAS 
 * @param z VETOR QUE ARMAZENARÁ O MAIOR E O MENOR VALOR
 */
void identify_maior_menor(int M[][NC], int m, int n, int * z);

/**
 * @brief TROCA O MENOR NUMERO DA MATRIZ PELO MAIOR E VICE VERSA.
 * 
 * @param M MATRIZ A SER ANALISADA
 * @param l QTD LINHAS
 * @param c QTD COLUNAS
 * @param x VETOR COM O MAIOR E MENOR VALOR CONTIDO NA MATRIZ ANALISADA
 */
void troca_menor_maior(int M[][NC], int l, int c, int * x);

/**
 * @brief REALIZA A IMPRESSÃO DA MATRIZ M
 * 
 * @param M MATRIZ A SER IMPRIMIDA
 * @param l QTD LINHAS
 * @param c QTD COLUNAS
 */
void print_mat(int M[][NC], int l, int c);

int main(){
    int mat[NC][NC], m, n, mm[2];
    scanf("%d %d", &m, &n);
    le_mat(mat, m, n);
    identify_maior_menor(mat, m, n, mm);
    troca_menor_maior(mat, m, n, mm);
    print_mat(mat, m, n);
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

void troca_menor_maior(int M[][NC], int l, int c, int * x){
    int i, k;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++){
            if (M[i][k] == x[0]) M[i][k] = x[1];
            else if (M[i][k] == x[1]) M[i][k] = x[0];
            else continue;
        }
    }
}

void print_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++)
            printf("%d ", M[i][k]);
        printf("\n");
    }
}