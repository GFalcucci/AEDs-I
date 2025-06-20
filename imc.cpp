#include <stdio.h>

int main() {

    float peso, altura, IMC;

    printf("\n\tDigite seu peso, em kg:");
    scanf("%f", &peso);

    printf("\n\tDigite a sua altura, em metros:");
    scanf("%f", &altura);

    IMC = (float) peso/(altura * altura);

    printf("\n\tIMC: %f\n\n", IMC);

    if (IMC < 18.5) {
        printf("\n\tVocê está abaixo do peso.");
    } else
        if (IMC >= 18.5) {
        printf("\n\tVocê está no peso normal.");
    } else
        if (IMC > 24.9) {
        printf("\n\tVocê está com excesso de peso.");
    } else
        if (IMC > 29.9) {
        printf("\n\tVocê está com obesidade I.");
    } else
        if (IMC > 34.9) {
        printf("\n\tVocê está com obesidade II.");
    } else
        if (IMC > 39.9) {
        printf("\n\tVocê está com obesidade III.");
    }

    return 0;

}

//otimizações: 
//tirar a condição de ser maior e menor, só maior já pega tudo | garantir que vai pegar todos valores | último com certeza vai ser verdadeiro, porque já testou tudo, então é só else