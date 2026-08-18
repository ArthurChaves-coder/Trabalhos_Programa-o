#include<iostream>
#include<string>
#include<limits>
#include<vector>

using namespace std;

typedef struct{
    string nome;
    float codigo;
    int ano;
    float preco;
} Carro;

int main(){
    vector<Carro> cadastro;
    int opcao;
    string nome;
    float codigo;
    int ano;
    float preco;
    float precobuscado;
    int i;
    bool encontrado = false;

    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar um carro novo no sistema\n";
        cout << "2- Buscar carros mais baratos que o valor escolhido\n";
        cout << "3- Sair\n";
        cout << "opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1:
            cout << "digite o nome do carro que sera cadastrado: ";
            getline(cin,nome);
            cout << "digite o codigo do carro: ";
            cin >> codigo;
            cout << "digite o ano do carro: ";
            cin >> ano;
            cout << "digite o preço que sera colocado no sistema: ";
            cin >> preco;
            cadastro.push_back({nome,codigo,ano,preco});
            break;

            case 2:
            encontrado = false;
            cout << "digite o valor que quer aparecer carros com menor valor: ";
            cin >> precobuscado;

            for(i=0; i<cadastro.size(); i++){
                if(cadastro[i].preco < precobuscado){
                    cout << "carros cadastrados com preco menor: \n";
                    cout << cadastro[i].nome << ":" << cadastro[i].ano << "," << cadastro[i].preco << "\n";
                    encontrado = true;
                }
                break;
            }

            case 3:
            cout << "saindo do programa";
            break;
        }
    }while(opcao != 3);
    return 0;
}
