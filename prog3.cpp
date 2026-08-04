#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    int opcao, i, j;
    int vetor[10];
    int maior, menor;
    int soma = 0;
    float media;
    int temp;
    float mediana;

    do{
        system("cls");
        cout << "-----------------------------------\n";
        cout << "MENU DE OPCOES\n";
        cout << "-----------------------------------\n";
        cout << "1 - Colocar valores aleatorios para um vetor\n";
        cout << "2 - Mostrar valores do vetor sorteados\n";
        cout << "3 - Exibir maior e menor valor\n";
        cout << "4 - Calcular a media dos valores do vetor\n";
        cout << "5 - Ordenar o vetor em ordem crescente\n";
        cout << "6 - Calcular a mediana dos valores do vetor(so funciona com a ordenacao feita primeiramente!!!)\n";
        cout << "7 - Sair\n";

        cout << "Escolha uma opcao: \n";
        cin >> opcao;

        switch(opcao){

            case 1: //facil
                srand(time(NULL));
                for(i = 0; i < 10; i++){
                    vetor[i] = rand() % 100;
                }
                cout << "valores sorteados com sucesso!\n";
                break;

            case 2: //facil
                cout << "Valores do vetor sorteados: \n";
                for(i = 0; i < 10; i++){
                    cout << vetor[i] << " ";
                }
                cout << "\n";
                break;

            case 3: //facil
                maior = vetor[0];
                menor = vetor[0];

                for(i = 0; i < 10; i++){
                    if(vetor[i] > maior){
                        maior = vetor[i];
                    }
                    if(vetor[i] < menor){
                        menor = vetor[i];
                    }
                }
                cout << "Maior valor: " << maior << "\n";
                cout << "Menor valor: " << menor << "\n";
                break;

            case 4: //facil
                for(i = 0; i < 10; i++){
                    soma = soma + vetor[i];
                }
                media = soma / 10.0;
                cout << "Media dos valores do vetor: " << media << "\n";
                break;

            case 5: //dificil
                cout << "Ordenacao do vetor de forma crescente: \n";
                for(i = 0; i < 10; i++){
                    for(j = 0; j < 10 - i - 1; j++){
                        if(vetor[j] > vetor[j+1]){
                            temp = vetor[j];
                            vetor[j] = vetor[j+1];
                            vetor[j+1] = temp;
                        }
                    }
                }
                cout << "Vetor ordenado com sucesso!\n";
                break;

            case 6: //facil, nesse caso, como sao numeros pares, deve somar os dois e dividir por 2, caso fosse impar, seria apenas o valor do meio
                cout << "Mediana dos valores do vetor: \n";
                mediana = (vetor[4] + vetor[5]) / 2.0;
                cout << "Mediana: " << mediana << "\n";
                break;

            case 7:
                cout << "Saindo do programa\n";
                break;
        }
        system("pause");
    }while(opcao != 7);

    return 0;
}
