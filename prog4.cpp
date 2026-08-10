#include<iostream>
#include<vector>
#include<string>
#include<limits>
using namespace std;

int main(){
    int opcao;
    string valor;
    int i;
    vector<string>vetor;

    do {
    	
        cout << "digite o nome da pessoa numero " << vetor.size() << ": ";
        getline(cin, valor);
        vetor.push_back(valor);
        
        cout << "deseja adicionar outro elemento ? (1-sim / 0-nao): ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(opcao == 1);

    for(i=0; i < vetor.size(); i++){
        cout << "\no valor do elemento " << i << " e: " << vetor[i];
    }

    return 0;
}
