#include <stdio.h>


int verificaFibonacci(int num) {
    int a = 0, b = 1, c;

    //casos especiais
    if (num == 0 || num == 1)
        return 1;

    //loop para gerar os números da sequência até que o próximo número seja maior que o número informado
    while (1) {
        c = a + b;
        if (c == num)
            return 1; //pertence
        else if (c > num)
            return 0;
        a = b;
        b = c;
    }
}

int main() {
    int numero;
    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (verificaFibonacci(numero))
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    else
        printf("%d não pertence à sequência de Fibonacci.\n", numero);

    return 0;
}
