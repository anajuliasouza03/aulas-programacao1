#include<stdio.h>

int main(){
    int dia, mes, ano; 
    char nome[10];

    printf("entre com o dia:\n>> ");
    scanf("%d", &dia);
    printf("entre com o mes: \n>>");
    scanf("%d",&mes);
    printf("o dia e o mes digitados foram: %d %d ", dia, mes);

    printf("\nn entre com o nome: ");
    scanf("%s", &nome);
    printf("o nome digitado foi: %s", nome);

    return 0;

}
