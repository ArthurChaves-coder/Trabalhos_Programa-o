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
                cout << "Digite o nome que quer cadastrar: ";
                getline(cin, nome);
                nomes.push_back(nome);
                cout << "nome cacastrado com sucesso!\n";
                break;
            
            case 2:
            for(i = 0; i < nomes.size(); i ++){
                cout << nomes[i] << "\n";
            }
            break;
            
            case 3: // limpar lista de nomes
            nomes.clear();
            cout << "Vetor limpo!\n";
            break;

            case 4:
            cout << "Digite o nome que quer pesquisar: ";
            getline(cin,nome);
            for(i = 0; i < nomes.size(); i++){
                if(nome == nomes[i]){
                    cout << "Nome encontrado na posicao: " << i << " da lista\n";
                    break;
                }
            }
            break;

            case 5: // usar tecnica das bolhas
            houvetroca = true;
            for(i = 0; i < nomes.size(); i++){
                    for(int j = 0; j < nomes.size() - 1; j++){
                        if(nomes[j] > nomes[j + 1]){
                            local = nomes[j];
                            nomes[j] = nomes[j + 1];
                            nomes[j + 1] = local;
                        }
                    }
                    if(!houvetroca){
                        break;
                    }
                    houvetroca = false;
                }
                cout << "Nomes ordenados com sucesso!\n";
                break;
        }
    }while(opcao != 0);

    return 0;
}
