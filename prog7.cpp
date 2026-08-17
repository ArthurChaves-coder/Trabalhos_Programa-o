#include<iostream>
#include<string>
#include<vector>
#include<limits>

using namespace std;

int main(){

    vector<string> nomes;
    int opcao;
    string nome;
    bool houvetroca = false;
    int i;
    int soma = 0;
    int quantidadeInseridos = 0;
    string local;

    do{

        cout << "\nMENU\n";
        cout << "1- cadastrar um nome\n";
        cout << "2- Listar nomes\n";
        cout << "3- Limpar Vetor\n";
        cout << "4- Pesquisar nome\n";
        cout << "5- Ordenar nomes\n";
        cout << "0- Encerrar programa\n";
        cout << "opcao: ";
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1:
                cout << "digite o nome que quer cadastrar: ";
                getline(cin, nome);
                nomes.push_back(nome);
                cout << "nome cacastrado com sucesso\n";
                break;
            
            case 2:
            for(i = 0; i < nomes.size(); i ++){
                cout << nomes[i] << "\n";
            }
            break;
        }
    }while(opcao != 0);

    return 0;
}
