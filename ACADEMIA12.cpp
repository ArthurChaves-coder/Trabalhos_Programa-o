#include<iostream>
#include<string>
#include<limits>
#include<vector>

using namespace std;

typedef struct{
    string nome;
    float peso;
    float altura;
    float codigo;
} Perfil;

int main(){
    vector<Perfil> aluno;
    int i;
    int opcao;
    string nome;
    float peso;
    float altura;
    float codigo;
    bool encontrado = false;
    int indicemaisalto;
    int alunomaisalto = 0;

    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar aluno\n";
        cout << "2- Exibir aluno mais alto ate o momento\n";
        cout << "3- Sair\n";
        cout << "opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "digite o nome do novo aluno: ";
            getline(cin,nome);
            cout << "digite o peso do aluno: ";
            cin >> peso;
            cout << "digite a altura do aluno: ";
            cin >> altura;
            cout << "digite o codigo do aluno: ";
            cin >> codigo;
            aluno.push_back({nome,peso,altura,codigo});
            cout << "aluno cadastrado com sucesso!";
            break;

            case 2:
            encontrado = false;
            for(i=0; i < aluno.size(); i++){
                if(aluno[i].altura > aluno[alunomaisalto].altura){
                    indicemaisalto = i;
                }
            }
                cout << "\n--- ALUNO MAIS ALTO ---\n";
                cout << "Nome: " << aluno[indicemaisalto].nome << "\n";
                cout << "Altura: " << aluno[indicemaisalto].altura << " m\n";
                cout << "Peso: " << aluno[indicemaisalto].peso << " kg\n";
                cout << "Codigo: " << aluno[indicemaisalto].codigo << "\n";
                encontrado = true;
                break;

            case 3:
            cout << "saindo do programa";
            break;
        }
    }while(opcao != 3);
    return 0;
}
