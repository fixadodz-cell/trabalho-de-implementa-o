
#include <stdio.h>

// Funcao para calcular fatorial
int fatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}

int main() {
    int opcao, n, p;
    int i, j, resultado;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Triangulo de Pascal\n");
        printf("2 - Arranjo simples\n");
        printf("3 - Permutacao simples\n");
        printf("4 - Combinacao simples\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Digite a quantidade de linhas: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    resultado = 1;

                    for (j = 0; j <= i; j++) {
                        printf("%d ", resultado);
                        resultado = resultado * (i - j) / (j + 1);
                    }

                    printf("\n");
                }
                break;

            case 2:
                printf("Digite o valor de n: ");
                scanf("%d", &n);

                printf("Digite o valor de p: ");
                scanf("%d", &p);

                if (n >= 0 && p >= 0 && p <= n) {
                    resultado = fatorial(n) / fatorial(n - p);
                    printf("Arranjo simples: %d\n", resultado);
                } else {
                    printf("Valores invalidos!\n");
                }
                break;

            case 3:
                printf("Digite o valor de n: ");
                scanf("%d", &n);

                if (n >= 0 && n <= 12) {
                    resultado = fatorial(n);
                    printf("Permutacao simples: %d\n", resultado);
                } else {
                    printf("Valor invalido! Digite de 0 a 12.\n");
                }
                break;

            case 4:
                printf("Digite o valor de n: ");
                scanf("%d", &n);

                printf("Digite o valor de p: ");
                scanf("%d", &p);

                if (n >= 0 && p >= 0 && p <= n && n <= 12) {
                    resultado = fatorial(n) /
                    (fatorial(p) * fatorial(n - p));

                    printf("Combinacao simples: %d\n", resultado);
                } else {
                    printf("Valores invalidos!\n");
                }
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
