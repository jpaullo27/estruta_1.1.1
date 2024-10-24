#include <stdio.h>

int manualStrcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] != s2[i]){
            return 1;
        }
        i++;
    }
    if(s1[i] != s2[i]){
        return 1;
    }
    
    return 0;
}

int main(void){
    char name[20];
    char name2[20];

    printf("Digite o nome: ");
    scanf("%s", name);
    printf("Digite o nome: ");
    scanf("%s", name2);

    
    if(manualStrcmp(name,name2)){
        printf("Nomes diferentes\n");
    }
    else{
        printf("Nomes iguais\n");
    }
    return 0;
}