#include <stdio.h>

#define NC 100

void le_mat(int M[][NC], int l, int c);

int main(){
    int n1, n2, logo[NC][NC], tv[NC][NC], i, k, j, z, l, m, tmlogo, seq;
    scanf("%d", &n1);
    tmlogo = n1*n1;
    le_mat(logo, n1, n1);
    scanf("%d", &n2);
    le_mat(tv, n2, n2);
    n1-=1;
    for(i=0; i<(n2-n1); i++){
        for(k=0; k<(n2-n1); k++){
            seq=0;
            l = 0;
            for(j=i;j<=i+n1;j++){
                m=0;
                for(z=k;z<=k+n1;z++){
                    if(tv[j][z] == logo[l][m]) seq++;
                    m++;
                }
                l++;
            }
            if (seq==tmlogo){
                printf("sim\n");
                return 0;
            }
        }
    }
    printf("nao\n");
    return 0;
}

void le_mat(int M[][NC], int l, int c){
    int i, k;
    for (i=0; i<l; i++)
        for(k=0; k<c; k++)
            scanf("%d", &M[i][k]);
}