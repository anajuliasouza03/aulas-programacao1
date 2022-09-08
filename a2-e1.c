#include<stdio.h>
#include<math.h>

main(){
    float coefa, coefb, coefc;
    float delta, raiz1, raiz2;

    printf("entre com o coeficiente a: \n>>");
    scanf("%f",&coefa);

    printf("entre com o coeficiente b: \n>>");
    scanf("%f",&coefb);
    
    printf("entre com o coeficiente c: \n>>");
    scanf("%f",&coefc);

    delta = pow(coefb, 2) - (4 * coefa * coefc);

    if (delta < 0){
        printf("não existem raizes reais");

    }else{
        raiz1 = (- coefb + sqrt(delta))/(2*coefa);
        raiz2 = (- coefb + sqrt(delta))/(2*coefa);

        printf("\n raiz1 = %5.2f \n raiz2 = %5.2f", raiz1, raiz2);

    }


    


}