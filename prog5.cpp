#include<iostream>
#include<string>
#include<vector>
#include "meusTipos.h" //criar uma aba nova em new file ali em cima com o mesmo nome

using namespace std;

int main(){
	vector<Veiculo> garagem; // devemos criar esse veiculo
	
	string placa, cor, horaEntrada;
    placa = "ABC1234";
    cor = "Vermelho";
    horaEntrada = "08:30";

    garagem.push_back({placa, cor, horaEntrada}); //pushback serve para nao precisar ter numero maximo de elementos, posso colocar quantos eu quiser

    cout << garagem[0].placa << "\n";
    cout << garagem[0].cor << "\n";
    cout << garagem[0].horaEntrada << "\n";
	return 0;
}
