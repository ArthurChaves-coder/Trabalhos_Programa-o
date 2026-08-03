#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main() {
    int opcao;
    int vetor[TAMANHO];
    int qtd_elementos = 0;
    srand(time(NULL));

    do {
        system("cls");
        printf("========================================\n");
        printf("            MENU PRINCIPAL              \n");
        printf("========================================\n");
        printf("1 - Popular vetor com numeros aleatorios\n");
        printf("2 - Listar vetor populado\n");
        printf("3 - Ordenar vetor\n");
        printf("4 - Calcular media aritmetica\n");
        printf("5 - Calcular mediana\n");
        printf("6 - Exibir menor e maior valor\n");
        printf("7 - Sair do sistema\n");
        printf("========================================\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nPopulando o vetor com numeros aleatorios...\n");
                for (int i = 0; i < TAMANHO; i++) {
                    vetor[i] = rand() % 100;
                }
                qtd_elementos = TAMANHO;
                printf("Vetor populado com sucesso!\n");
                break;

            case 2:
                printf("\nListando o vetor:\n");
                if (qtd_elementos > 0) {
                    for (int i = 0; i < TAMANHO; i++) {
                        printf("%d\t", vetor[i]);
                    }
                    printf("\n");
                } else {
                    printf("Vetor vazio. Nada a exibir.\n");
                }
                break;

            case 3:
                printf("\nOrdenando o vetor (Metodo Bolha)...\n");
                if (qtd_elementos > 0) {
                    
                    for (int i = 0; i < TAMANHO - 1; i++) {
                        for (int j = 0; j < TAMANHO - i - 1; j++) {
                            if (vetor[j] > vetor[j + 1]) {
                                int aux = vetor[j];
                                vetor[j] = vetor[j + 1];
                                vetor[j + 1] = aux;
                            }
                        }
                    }
                    printf("Vetor ordenado com sucesso!\n");
                } else {
                    printf("Vetor vazio. Nada para ordenar.\n");
                }
                break;

            case 4: 
                printf("\nCalculando a media aritmetica...\n");
                if (qtd_elementos > 0) {
                    float soma = 0;
                    for (int i = 0; i < TAMANHO; i++) {
                        soma += vetor[i];
                    }
                    float media = soma / TAMANHO;
                    printf("A media aritmetica e: %.2f\n", media);
                } else {
                    printf("Vetor vazio. Impossivel calcular a media.\n");
                }
                break;

            case 5: 
                printf("\nCalculando a mediana\n");
                if (qtd_elementos > 0) {
                    
                    int temp[TAMANHO];
                    for (int i = 0; i < TAMANHO; i++) {
                        temp[i] = vetor[i];
                    }

                    
                    for (int i = 0; i < TAMANHO - 1; i++) {
                        for (int j = 0; j < TAMANHO - i - 1; j++) {
                            if (temp[j] > temp[j + 1]) {
                                int aux = temp[j];
                                temp[j] = temp[j + 1];
                                temp[j + 1] = aux;
                            }
                        }
                    }

                    float mediana;
                    
                    if (TAMANHO % 2 != 0) {
                        mediana = temp[TAMANHO / 2];
                    } else {
                        mediana = (float)(temp[(TAMANHO / 2) - 1] + temp[TAMANHO / 2]) / 2.0;
                    }
                    printf("A mediana e: %.2f\n", mediana);
                } else {
                    printf("Vetor vazio. Impossivel calcular a mediana\n");
                }
                break;

            case 6:
                printf("\nLocalizando menor e maior valor\n");
                if (qtd_elementos > 0) {
                    int menor = vetor[0];
                    int maior = vetor[0];

                    for (int i = 1; i < TAMANHO; i++) {
                        if (vetor[i] < menor) {
                            menor = vetor[i];
                        }
                        if (vetor[i] > maior) {
                            maior = vetor[i];
                        }
                    }
                    printf("Menor valor encontrado: %d\n", menor);
                    printf("Maior valor encontrado: %d\n", maior);
                } else {
                    printf("Vetor vazio. Nenhum valor para analisar.\n");
                }
                break;

            case 7:
                printf("\nSistema encerrado com sucesso\n");
                break;

            default:
                printf("\nOpcao invalida. Redigite.\n");
                break;
        }
        system("pause");
    } while (opcao != 7);

    return 0;
}
