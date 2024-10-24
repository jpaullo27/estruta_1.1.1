#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct {
	int matricula;
	char nome[30];
	} TAluno;

TAluno v[20];
int ultimo = 0;

void inserir(TAluno novo){
	v[ultimo] = novo;
	ultimo++;	
}
void remover(int procurado){	
	for(int i = 0; i < ultimo; i++){
		if(v[i].matricula == procurado){
			for(int j = i; j < ultimo; j++){
				v[j] = v[j+1];
			}
			ultimo--;
			break;
		}
	}
}
void mostra(){	
	for(int i = 0; i < ultimo; i++){
		cout << "MATRICULA -> "<< v[i].matricula << " | " << "NOME -> " << v[i].nome << endl;
	}
}

int main(void){
	TAluno a;
	char name[30];
	
	while(1){
		cout << "--------------- Menu --------------\n";
		cout << "[ 1 ] - Inserir\n[ 2 ] - Remover\n[ 3 ] - Mostrar\n[ 4 ] - Sair\n";
		cout << "-----------------------------------\n";	
		cout << "Digite a opcao: ";
		int opcao;
		cin >> opcao;
		cout << "-----------------------------------\n";

		if (opcao == 1) {
			cout << "Digite a matricula: ";
			cin >> a.matricula;
			cout << "Digite o nome: ";
			cin >> name;
			strcpy(a.nome, name);
			inserir(a);
		} else if (opcao == 2) {
			cout << "Digite a matricula: ";
			int mat;
			cin >> mat;
			remover(mat);
		} else if (opcao == 3) {
			mostra();
		} else if (opcao == 4) {
			break; // Encerra o programa
		}
	}
	
	return 0;
}
