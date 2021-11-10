#include <stdio.h>

#define NC 10

void le_mat(double M[][NC], int l, int c);

void print_mat(double M[][NC], int l, int c);

int main(){
    double x[NC][NC], result[NC][NC], temp, y[NC][NC];
    int i, k, j, n, pot;
    scanf("%d", &n);
    scanf("%d", &pot);
    le_mat(x, n, n);
    for (i=0; i<n;i++){
        for (k=0; k<n; k++){
            y[i][k]=x[i][k];
        }
    }
    while(1){
        pot--;
        if (pot==0) break;
        for (i=0; i<n;i++){
            for (k=0; k<n; k++){
                temp = 0;
                for (j=0; j<n; j++){
                    temp+=x[i][j]*y[j][k];
                }
                result[i][k] = temp;
            }
        }
        for (i=0; i<n;i++){
            for (k=0; k<n; k++){
                x[i][k]=result[i][k];
            }
        }
    }
    print_mat(result, n, n);
    return 0;
}

void le_mat(double M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%lf", &M[i][k]);
}

void print_mat(double M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++){
        for(k=0; k<c; k++)
            printf("%.3lf ", M[i][k]);
        printf("\n");
    }
}