#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    char name2[20];

    printf("Digite o nome: ");
    scanf("%s", name);
    printf("Digite o nome: ");
    scanf("%s", name2);

    
    if(strcmp(name,name2)){
        printf("Nomes diferentes\n");
    }
    else{
        printf("Nomes iguais\n");
    }
    return 0;
}