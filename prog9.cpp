#include<iostream>
#include<string>
#include<vector>
#include<limits>
using namespace std;

typedef struct{
    string nome;
    float nota1;
    float nota2;
    float matricula;
} Aluno;

int main(){
    vector<Aluno> cadastro;
    int opcao;
    string nome;
    float nota1;
    float nota2;
    float matricula;
    bool encontrado = false;
    int i;
    float media = 0;
    float soma = 0;

    do{
    
    cout << "\nMENU\n";
    cout << "1- Cadastrar aluno no sistema\n";
    cout << "2- Listar alunos e suas medias aritimeticas\n";
    cout << "3- Sair do programa\n";
    cout << "opcao: ";
    cin >> opcao;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch(opcao){
        case 1:
        cout << "digite o nome do aluno que sera cadastrado: ";
        getline(cin,nome);
        cout << "digite a nota 1 do aluno: ";
        cin >> nota1;
        cout << "digite a nota do aluno 2: ";
        cin >> nota2;
        cout << "digite a matricula do aluno: ";
        cin >> matricula;
        cadastro.push_back({nome, nota1, nota2, matricula});
        break;

        case 2:
        encontrado = true;
        for(i=0;i < cadastro.size(); i++){
            media = (cadastro[i].nota1 + cadastro[i].nota2) / 2;
            cout << cadastro[i].nome << "\n";
            cout << "\nmatricula: " << cadastro[i].matricula << "\n";
            cout << "a media aritmetia desse aluno e: " << media << "\n";
        }
        break;

        case 3:
        cout << "saindo do programa...";

        }
    }while(opcao != 3);
}
