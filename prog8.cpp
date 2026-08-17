#include<iostream>
#include<string>
#include<vector>
#include<limits>
using namespace std;

typedef struct{
    string nome;
    float valor;
    int quantidade;
} Produto;

int main(){
    vector<Produto> listaprodutos;
    int opcao;
    string nome;
    float valor;
    int quantidade;
    int i;
    string produtobuscado;
    float valortotal = 0;
    bool encontrado = false;

    do {
        cout << "\nMENU\n";
        cout << "1- Cadastrar um produto\n";
        cout << "2- Exibir valor total do produto no estoque\n";
        cout << "3- Sair do programa\n";
        cout << "opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1:
            cout << "digite o nome do produto: ";
            getline(cin,nome);
            cout << "digite o valor de um produto cadastrado: ";
            cin >> valor;
            cout << "digite a quantidade do mesmo produto: ";
            cin >> quantidade;
            listaprodutos.push_back({nome, valor, quantidade});
            break;

            case 2: 
            encontrado = false;
            cout << "digite o produto que voce quer saber o valor em estoque: ";
            getline(cin,produtobuscado);
            for(i=0; i < listaprodutos.size(); i ++){
                if(listaprodutos[i].nome == produtobuscado){
                    valortotal = listaprodutos[i].quantidade * listaprodutos[i].valor;
                    encontrado = true;
                    break;  
                }
            }
            if(encontrado){
                cout << "o total em estoque de " << produtobuscado << " e " << valortotal;
            }
            break;
        
            case 3:
            cout << "saindo do programa...";
            break;
        }
    }while(opcao != 3);
    return 0;
}
