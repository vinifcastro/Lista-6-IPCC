#include <stdio.h>

#define NC 10

void le_mat(int M[][NC], int l, int c);

int main(){ 
    int mat[NC][NC], l, c, ci, cf, li, lf, i, k;
    scanf("%d %d", &l, &c);
    if (l>10 || l<1 || c>10|| c<1){
        printf("Dimensao invalida\n");
    }
    else{
        le_mat(mat, l, c);
        li = ci = 0;
        lf = l-1;
        cf = c-1;
        while (1){
            for(i=ci;i<=cf;i++)
                printf("%d ", mat[li][i]);
            if(li-lf==0) break;
            li++;
            if(li == lf+1) break;
            for(i=li;i<=lf;i++)
                printf("%d ", mat[i][cf]);
            if(ci-cf==0) break;
            cf--;
            for(i=cf;i>=ci;i--)
                printf("%d ", mat[lf][i]);
            if(li-lf==0) break;
            lf--;
            if(lf == li-1) break;
            for(i=lf;i>=li;i--)
                printf("%d ", mat[i][ci]);
            if(ci-cf==0) break;
            ci++;
        }
        printf("\n");
    }
    return 0;
}

void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%d", &M[i][k]);
}