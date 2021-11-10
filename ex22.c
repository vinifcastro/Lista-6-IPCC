#include <stdio.h>

#define NC 9

/**
 * @brief FAZ A LEITURA DO SUDOKU INSERIDO PELO USUARIO
 * 
 * @param M MATRIZ QUE RECEBERÁ O SUDOKU INSERIDO PELO USUÁRIO
 * @param l QTD LINHAS
 * @param c QTD COLUNAS
 */
void le_mat(int M[][NC], int l, int c);

/**
 * @brief TESTE PARA VER SE HA NUMEROS IGUAIS NA MESMA LINHA OU COLUNA
 * 
 * @param M MATRIZ QUE CONTEM O SUDOKU
 * @param l QTD LINHAS
 * @param c QTD COLUNAS
 * @return 0 PARA SUDOKU INVÁLIDO E 1 PARA VÁLIDO
 */
int t1(int M[][NC], int l, int c);

/**
 * @brief TESTE PARA VER SE TEM NÚMEROS DE 1 A 9 EM CADA QUADRADO 3X3 DO SUDOKU
 * 
 * @param M MATRIZ QUE CONTEM O SUDOKU
 * @param l QTD LINHAS
 * @param c QTD COLUNAS
 * @return 0 PARA SUDOKU INVÁLIDO E 1 PARA VÁLIDO
 */
int t2(int M[][NC], int l, int c);

int main(){
    int sudoku[NC][NC];
    le_mat(sudoku, NC, NC);
    if ((t1(sudoku, NC, NC)==0) || (t2(sudoku, NC, NC)==0)){
        printf("invalido\n");
        return 0;
    }
    printf("valido\n");
    return 0;
}

void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%d", &M[i][k]);
}

int t1(int M[][NC], int l, int c){
    int i, k, z;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++){
            for (z=0; z<c; z++){
                if(i!=z && k!=z){
                    if (M[i][k]==M[i][z] || M[i][k]==M[z][k]){  
                        return 0;
                    }     
                }
            }
        }
    }
    return 1;
}

int t2(int M[][NC], int l, int c){
    int i, k, z, j, n, seq, num;
    for (i=0;i<7;i+=3){
        for(k=0;k<7;k+=3){
            seq=0;
            num = 1;
            for (z=i; z<i+3; z++){
                for (j=k; j<k+3; j++){
                    if (seq==9){
                        j=k+3;
                        z=i+3;
                    }
                    else if (M[z][j]==num){
                        seq++;
                        num++;
                        j=k+3;
                        z=i-1;
                    }
                }
            }
            if (seq!=9) return 0;
        }
    }
    return 1;
}