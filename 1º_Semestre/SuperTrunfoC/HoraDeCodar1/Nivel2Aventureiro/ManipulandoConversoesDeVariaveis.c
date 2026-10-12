#include <stdio.h>

int main(){
    int numero1 = 10, numero3 = 3;
    float numero2 = 3.5;
    float resultado = numero1 + numero2;// 'numero1' é convertido implicitamente para float
    float resultado2 = (float) numero1 / numero3; // o número agora é convertido explicitamente para o float

    printf("Resultado = %.2f\n",resultado2);

    return 0;
}