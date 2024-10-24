#include <iostream>
using namespace std;

int main(void){
    string name;
    string name2;

    cout << "Digite o nome: ";
    cin >> name;
    cout << "Digite o nome: ";
    cin >> name2;

    if(name != name2){
        cout << "Nomes diferentes\n";
    }
    else{
        cout << "Nomes iguais\n";
    }
    return 0;
}