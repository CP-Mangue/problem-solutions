#include <stdio.h>
     
int main() {
    int i,j,cont=0;
    float mat[12][12],soma=0;
    char operacao;
    scanf("%c",&operacao);
    for(i=0;i<=11;i++) {
        for(j=0;j<=11;j++) {
            scanf("%f",&mat[i][j]);
        }
    }
    for(j=1;j<=11;j++) {
        for(i=0;i<=j-1;i++) {
            soma+=mat[i][j];
            cont++;
        }
    }
    if(operacao=='S')
        printf("%.1f\n",soma);
    else if(operacao=='M')
        printf("%.1f\n",soma/cont);
    return 0;
}
