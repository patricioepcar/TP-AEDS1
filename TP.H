#ifndef TP_H_INCLUDED
#define TP_H_INCLUDED

typedef struct{
    char *nome;
    int   ano;
    char *editora;
}Livro;

typedef struct{
    char *nome;
    char *curso;
}Aluno;

typedef struct{
    Livro *livros;
    Aluno  aluno;
}Emprestimo;

void imprimelinha(char a,int b);
void imprimelivro(Livro livros);
Livro criarLivro();
void registrarLivro(Livro *livros,int *tamanho,Livro livro);
Aluno criarAluno();
void registrarAluno(Aluno *alunos,int *qtd_alunos,Aluno aluno);
int  mostramenu();
void calculardatadevolucao(Livro *livros,int b);
void imprimecomprovante(Livro *livros,int b);
Livro* buscarlivro(Livro *livros,char *nomedelivro);
#endif // TP_H_INCLUDED

