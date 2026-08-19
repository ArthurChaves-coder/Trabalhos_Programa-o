#include<iostream>
#include<vector>
#include<string>
#include<limits>

using namespace std;

typedef struct{
    float numeroConta;
    float saldo;
} Contas;

int main(){
    vector<Contas> conta; 
    int opcao;
    float numeroConta;
    float saldo;
    int i;
    float total;
    float deposito;
    bool encontrou = false;
    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar nova conta\n";
        cout << "2- Depositar dinheiro\n";
        cout << "3- Mostrar todas as contas\n";
        cout << "4- Sair\n";
        cout << "opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
            cin.ignore();
            cout << "digite o numero da sua conta: ";
            cin >> numeroConta;
            cout << "digite o saldo inicial de sua conta: ";
            cin >> saldo;
            conta.push_back({numeroConta, saldo});
            break;

            case 2:
            encontrou = false;
            cout << "digite o numero da conta que quer adicionar um valor: ";
            cin >> numeroConta;
            cout << "digite o valor que sera depositado na conta: ";
            cin >> deposito;
            for(i=0; i < conta.size(); i++){
                if(conta[i].numeroConta == numeroConta){
                    conta[i].saldo =  conta[i].saldo + deposito;
                    encontrou = true;
                    cout << "saldo depositado com sucesso!";
                }
            }
            break;

            case 3:
            cout << "Contas existentes no sistema e seus saldos: \n";
            for(i=0; i < conta.size(); i ++){
                cout << conta[i].numeroConta << " ,saldo: " << conta[i].saldo;
            }
            break;

            case 4:
            cout << "saindo do programa...";
            break;
        }

    }while(opcao != 4);
    return 0;
}
