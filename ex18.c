#include <stdio.h>

#define NC 100

void le_mat(int M[][NC], int l, int c);

void swap(int * x, int * y);

void printf_mat(int M[][NC], int l, int c);

int main(){
    int mat[NC][NC], i, n, k, z;
    scanf("%d",&n);
    le_mat(mat, n, n);
    for(i=0; i<n; i++){
        for(z=0; z<n; z++){
            for(k=0; k<n; k++){
                if ((k+1) >= n){
                    if (mat[k][i]<mat[0][i]) swap(&mat[0][i],&mat[k][i]);
                }
                else{
                    if (mat[k][i]>mat[k+1][i]) swap(&mat[k+1][i],&mat[k][i]);
                }
            }
        }
    }
    printf_mat(mat, n, n);
    return 0;
}

void printf_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++)
            printf("%d ", M[i][k]);
        printf("\n");
    }
}

void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%d", &M[i][k]);
}

void swap(int * x, int * y){
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}