#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct no {
int item;
struct no *prox = nullptr;
}No;


int main(void){
    int n;
    cout << "Informe o tamanho do vetor: ";
    cin >> n;
    No *novo = (No *)malloc(n * sizeof(No)); 

    for (int i = 0; i < n; i++){
        cout << "Informe o " << i << "° elemento: ";
        cin >> novo[i].item;
        
    if(i == n - 1){
        novo[i].prox = nullptr;
    }else{
    novo[i].prox  = &novo[i+1];    
    }
    }
    cout << "-----------------------------" << endl;
    int i = 0;
    for (No *p = novo; p != nullptr;p = p->prox){
        cout << "Posição: " << i << " | " << "Valor -> " << p->item << endl;
        i++;
    }
    return 0;
}
