#include<iostream>
#include<string>
using namespace std;

int main(){
    string nome;
    cout << "digite seu nome completo: ";
    getline(cin, nome); // getline para pegar todo o nome

    cout << "voce digitou " << nome << "\n";
    cout << "esse nome tem " << nome.length() << " caractertes";
    return 0;
}
