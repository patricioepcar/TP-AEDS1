#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TP.c"

void main(){
    Livro *livros = malloc(0);
    int qtd_Livros = 0;
    Aluno *alunos = malloc(0);
    int qtd_Alunos = 0;
    int opcao;
    do{
        opcao = mostramenu();
        switch (opcao){
            case 0:{

            break;
            }
            case 1:{
                registrarLivro(livros,&qtd_Livros,criarLivro());
                break;
            }
            case 2:{
                registrarAluno(alunos,&qtd_Alunos,criarAluno());
                break;
            }
            case 3:{
                Livro livro1;
                livro1.nome = "CALCULO1";
                livro1.editora = "FUNDAMENTOS";
                livro1.ano = 1999;
                imprimelivro(livro1);
                break;
            }
            default: {
                printf("\nopcao invalida!\n");
                break;
            }

        }

    }while(opcao!=0);


    free(alunos);
    free(livros);

}
