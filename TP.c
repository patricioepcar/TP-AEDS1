#include "TP.h"


void imprimelinha(char a,int b){
    for(int i=0;i<b;i++){
        printf("%c",a);
    }
}
// questao 2(OK);


 void imprimelivro(Livro livros){
        printf("%s",livros.nome);
        formatar(30 - (strlen(livros.nome)));
        printf("%s",livros.editora);
        formatar(12 - (strlen(livros.editora)));
        printf("%d",livros.ano);
        formatar((livros.ano) + 4);

    }
 // questao 3(OK);

 Livro criarLivro(){
    char str1[50];
    char str2[20];
    int ano;
    Livro livro;
    printf("\ninforme o nome do livro: ");
    fgets(str1,50,stdin);
    printf("\ninforme o ano do livro");
    scanf("%d",&ano);
    fflush(stdin);
    printf("\ninforme a editora do livro: ");
    fgets(str2,20,stdin);
    livro.nome = str1;
    livro.ano = ano;
    livro.editora = str2;
    return livro;

    }
 void registrarLivro(Livro *livros,int *tamanho, Livro livro){



    }


 Aluno criarAluno(){
     Aluno aluno;
     char str1[50];
     char str2[20];
     printf("\ninforme o nome do aluno:\n");
     fgets(str1,50,stdin);
     printf("\ninforme o curso do aluno: \n");
     fgets(str2,20,stdin);
     aluno.nome = str1;
     aluno.curso = str2;
     return aluno;
    }
 void registrarAluno(Aluno *alunos,int *qtd_alunos,Aluno aluno){


    }


int mostramenu (){
	int a;
	imprimelinha('*',20);
	printf("\nMENU DE OPCOES\n");
	imprimelinha('*',20);
	printf("\n0 - SAIR\n");
	printf("\n1 - CADASTRAR NOVO LIVRO\n");
	printf("\n2 - CADASTRAR NOVO ALUNO\n");
	printf("\n3 - REALIZAR EMPRESTIMO\n");
	imprimelinha('*',20);
	printf("informe sua opcao: ");
	scanf("%d",&a);
	fflush(stdin);
	return a;
}

void formatar(int espacamento){
    for(int i=0;i<espacamento;i++){
        printf(" ");
    }

}

void imprimeLivro(Livro livro){
    printf("%s",livro.nome);
    formatar(30 - strlen(livro.nome));
    printf("%s",livro.editora);
    formatar(16 - strlen(livro.editora));
    printf("%d",livro.ano);
//questao 3(OK);

}
