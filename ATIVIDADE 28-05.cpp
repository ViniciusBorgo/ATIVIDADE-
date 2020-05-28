// Leonardo  Kurussu 3902570 //
//Roger Souza 3898420 //
//Vander Cesar 3305905 //
// Vinicius Borgo 2071618 //
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAX_ALUNOS 50
 
 
typedef struct{
	char nome[50];
	float notas[4];
	int ativo;
}  Aluno;
Aluno Alunos [MAX_ALUNOS];
void menu();
void cadastrar();
void reprovados();
void pesquisar();
void listar();
int main(int argc, char const *argv[])
{
	menu();
	return 0;
}
void menu(){
	system("cls");
	int op;
	do{
	printf("\n1 - cadastrar aluno\n2 - remover Aluno");
	printf("\n3 - Alunos reprovados\n4 - pesquisar Aluno");
    printf("\n0 - sair\n");
    scanf("%d",&op);
    getchar();
    switch(op){
    case 1:
        cadastrar();
        break;
    case 5:
    	listar();
    	break;
        }
        	getchar();
    }while(op!=0);
}
void cadastrar(){
	char nome[50];
	float notas[4];
	int op;
	do{
			system("cls");
		printf("\nNome:");
		fgets (nome, sizeof(nome),stdin);
		printf("\n1 bimestre:");
		scanf("%f", &notas[0]);
		printf("\n2 bimestre:");
		scanf("%f", &notas[1]);
		printf("\n3 bimestre:");
		scanf("%f", &notas[2]);
		printf("\n4 bimestre:");
		scanf("%f", &notas[3]);
		for (int i =0; i < MAX_ALUNOS; ++i)
		{
			 (alunos[i].ativo==0)
			{
				alunos[i].notas[0] = notas[0];
				alunos[i].notas[1] = notas[1];
				alunos[i].notas[2] = notas[2];
				alunos[i].notas[3] = notas[3];
				strcpy (alunos[i]. nome, nome);
				alunos[i].ativos=1;
				break;

			}
		}
		printf("\n1 - continuar\n0 - sair\n");
		scanf("%d", &op);
	}while(op!=0);
}
void reprovados(){
}
void pesquisar(){
}
void listar(){
	system("cls");
	printf("\n lista de alunos:")
	for (int i = 0;i <MAX_ALUNOS; ++i)
	{
		if(alunos[i].ativo==1)
		{
		
		printf("nome: %s\n", alunos[1].nome);
		printf("1 bimestre: %0.2f\n", alunos[1].nome[0]);
		printf("2 bimestre: %0.2f\n", alunos[1].nome[1]);
		printf("3 bimestre: %0.2f\n", alunos[1].nome[2]);
		printf("4 bimestre: %0.2f\n", alunos[1].nome[3]);
		printf("\n--\n");
}
}
	
}
