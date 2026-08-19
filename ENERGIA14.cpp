#include<iostream>
#include<vector>
#include<string>
#include<limits>

using namespace std;

typedef struct{
    float numero;
    float consumo;
}Casas;

int main(){
    vector<Casas> casa;
    float numero;
    float consumo;
    int opcao;
    int i;
    float media;
    float soma;

        do{
            cout << "\nMENU\n";
            cout << "1- Cadastrar imovel no sistema\n";
            cout << "2- Calcular media de consumo de energia da rua\n";
            cout << "3- Mostrar imoveis com consumo acima da media\n";
            cout << "4- Sair\n";
            cout << "opcao: ";
            cin >> opcao;

            switch(opcao){
                case 1:
                cout << "digite o numero da casa: ";
                cin >> numero;
                cout << "digite o consumo de sua casa: ";
                cin >> consumo;
                casa.push_back({numero, consumo});
                break;

                case 2: 
                for(i=0; i < casa.size(); i++){
                    soma += casa[i].consumo;
                }
                media = soma / casa.size();
                cout << "a media do consumo das casas dessa rua e: " << media;
                break;

                case 3:
                for(i=0; i < casa.size(); i ++){
                    if(casa[i].consumo > media){
                      cout << "lista de casas que estao acima da media: \n";
                      cout << casa[i].numero << ": " << casa[i].consumo;  
                }
                break;
            }
        }
    }while(opcao != 4);
    return 0;
}
