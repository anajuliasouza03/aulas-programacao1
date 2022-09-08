#include<stdio.h>
#include<math.h>

int main(){
    char nome[10];
    float nota1,nota2;
    float media;
    int frequencia;

    printf("entre com o nome: \n>>");
    scanf("%s", &nome);

    printf("entre com a nota 1:\n>> ");
    scanf("%f",&nota1);

    printf("entre com a nota 2:\n>>");
    scanf("%f", &nota2);

    printf("entre com a frequencia: \n>>");
    scanf("%d", &frequencia);

    media = (nota1 + nota2) / 2;
    printf("a media do aluno %s: \n>>", nome);
    printf(">>nota1 = %5.2f \n>> nota2 = %2f \n>> medias: %5.2f", nota1, nota2, media);

    if(media >= 6 && frequencia >=75){
        printf("\n aluno APROVADO!");
    }else{
        printf("\n aluno REPROVADO!");
    }

    return 0;
}
