#include<iostream>
using namespace std;

int main(){
    int idade;
    cout << "digite sua idade: ";
    cin >> idade;

    int anosdormindo;
    anosdormindo = idade / 3;
    cout << "voce ja dormiu " << anosdormindo << " anos da sua vida";

    return 0;
}
