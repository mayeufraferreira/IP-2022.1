#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
   char nome[40];
   char email[40];
};

struct cadastro base_dados[30];
int proxPosicao = 0;


void cadastrar(char *nome, char *email){
    strcpy(base_dados[proxPosicao].nome, nome);
    strcpy(base_dados[proxPosicao].email, email);
    proxPosicao++;

}

void visualizar_base(){
    int i;
    for(i=0;i<proxPosicao;i++){
     printf("%s %s\n", base_dados[i].nome, base_dados[i].email);
    }
}

char* buscar_email(char* nome){
     int i;
     for(i=0;i<proxPosicao;i++){
        if (strcmp(base_dados[i].nome,nome) == 0){
             return base_dados[i].email;
        }
     }
     return "ERROR";
}

int main()
{
    char nome[40];

    cadastrar("Pedro", "Pedro@gmail.com");
    cadastrar("Ana", "Ana@gmail.com");

    printf("Digite o nome: \n");
    scanf("%s", &nome);
    printf("email: %s", buscar_email(nome));

    return 0;
}
