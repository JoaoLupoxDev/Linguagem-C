#include <stdlib.h>
#include <stdio.h>
typedef struct
{
    char Nome;
    int qtdDisciplinas;
}Aluno;


void listarAlunosComMenosDeXDisciplinas(int x, Aluno lista[], int qtdAlunos){
    for (int i=0;i<qtdAlunos;i++){
        if (lista->qtdDisciplinas < x){
            printf("%s", lista->Nome);
        }
    }
}

char cacaPalavraEmCruz(char matriz[][], char busca[]){
    int tam = strlen(busca);
    for (int c=0;c<tam;c++){
        char key = busca[c];
        for (int i=0;i<8;i++){

            for (int j=0;j<10;j++){
                
            }
        }
    }

}

int main(){
    Aluno lista[50];

}