#include <stdio.h>

#define N 300

/**
 * @brief INICIALIZA A MATRIZ PGM COM A COR DE FUNDO DEFINIDA PELO USUARIO.
 * 
 * @param M MATRIZ QUE FORMA A IMAGEM PGM.
 * @param complemento COR DE FUNDO
 * @param proporcao TAMANHO DO QUADRADO PROPORÇÃO X PROPORÇÃO.
 */
void init_mat(int M[][N], int complemento, int proporcao);

/**
 * @brief PRINTA A MATRIZ QUE FORMA A IMAGEM PGM.
 * 
 * @param M MATRIZ QUE FORMA A IMAGEM PGM.
 * @param l QUANTIDADE TOTAL DE LINHAS.
 * @param c QUANTIDADE TOTAL DE COLUNAS.
 */
void print_mat(int M[][N], int l, int c);

/**
 * @brief 
 * 
 * @param M MATRIZ QUE FORMARA A IMAGEM PGM.
 * @param xcol INDICE DA COLUNA.
 * @param ylin INDICE DA LINHA.
 * @param complemento COMPLEMENTO DO QUADRADO A SER FORMADO.
 * @param tam TAMANHO DO QUADRADO.
 * @param estilo ESTILO DO QUADRADO, 1 PARA BORDA E 2 PARA PREENCHIMENTO TOTAL.
 */
void quadrado_matpgm(int M[][N], int xcol, int ylin, int complemento, int tam, int estilo);

int main(){
    int xcol, ylin, tam, estilo, proporcao, complemento, img[N][N];
    scanf("%d %d", &proporcao, &complemento);
    init_mat(img, complemento, proporcao);
    scanf("%d %d", &xcol, &ylin);
    while (xcol!=-1 && ylin!=-1){
        scanf("%d %d %d", &complemento, &tam, &estilo);
        if ((xcol-tam)<0 || (ylin-tam)<0 || (xcol+tam)>(proporcao-1) || (ylin+tam)>(proporcao-1)) {
        scanf("%d %d", &xcol, &ylin);
        continue;
        }
        else quadrado_matpgm(img, xcol, ylin, complemento, tam, estilo);
        scanf("%d %d", &xcol, &ylin);
    }
    printf("P2\n");
    printf("%d %d\n", proporcao, proporcao);
    printf("255\n");
    print_mat(img, proporcao, proporcao);
    return 0;
}

void init_mat(int M[][N], int complemento, int proporcao){
    int i, k;
    for(i=0;i<proporcao;i++)
        for(k=0;k<proporcao;k++)
            M[i][k] = complemento;
}

void print_mat(int M[][N], int l, int c){
    int i, k;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++)
            printf("%d ", M[i][k]);
        printf("\n");
    }
}

void quadrado_matpgm(int M[][N], int xcol, int ylin, int complemento, int tam, int estilo){
    int i, k;
    if (estilo==1){
        for (i=(ylin-tam);i<(ylin+tam+1);i++){
            for (k=(xcol-tam);k<(xcol+tam+1);k++){
                if((i==ylin-tam) || (i==ylin+tam) || (k==xcol-tam) || (k==xcol+tam)){
                    M[i][k] = complemento;
                }
            }
        }       
    }
    if (estilo==2){
        for (i=(ylin-tam);i<(ylin+tam+1);i++){
            for (k=(xcol-tam);k<(xcol+tam+1);k++){
                M[i][k] = complemento;
            }
        }
    }
}