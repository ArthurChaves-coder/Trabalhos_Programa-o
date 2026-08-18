#include<iostream>
#include<string>
#include<vector>
#include<limits>
using namespace std;

typedef struct{
    string nome;
    float codigo;
    float ano;
    float paginas;
} Livro;

int main(){
    vector<Livro> biblioteca;
    int opcao;
    string nome;
    float codigo;
    float ano;
    float paginas;
    bool encontrou = false;
    int i;
    
    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar um novo livro\n";
        cout << "2- Filtrar livros depois de 2020\n";
        cout << "3- Sair do programa\n";
        cout << "opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "digite o nome do novo livro: ";
            getline(cin,nome);
            cout << "digite o codigo do livro: ";
            cin >> codigo;
            cout << "Digite o ano de lancamento do livro: ";
            cin >> ano;
            cout << "digite o numero de paginas do livro: ";
            cin >> paginas;
            biblioteca.push_back({nome, codigo, ano, paginas});
            cout << "livro cadastrado com sucesso!";
            break;

            case 2:
            encontrou = false;
            for(i=0; i < biblioteca.size() ; i++){
                if(biblioteca[i].ano > 2020){
                    cout << "lista de livros que tem ano de lancamento maior que 2020: \n";
                    cout << biblioteca[i].nome << "\n";
                    cout << biblioteca[i].codigo << "\n";
                    cout << biblioteca[i].ano << "\n";
                    encontrou = true;
                }
            }
            break;

            case 3:
            cout << "programa encerrado...";
            break;
        }
    }while(opcao != 3);
}
