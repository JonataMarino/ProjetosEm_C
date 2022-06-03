/*
Fazer um programa para corrigir provas de múltipla escolha. Cada prova tem 10 questões,
cada questão valendo 1 ponto. O primeiro conjunto de dados a ser lido será o gabarito para
correção da prova. Os outros dados serão os números dos alunos e suas respectivas
respostas, e o último número, do aluno fictício será 9999. O programa deverá calcular e
exibir:
a) Para cada aluno, o seu número e sua nota;
b) A porcentagem de aprovação, sabendo-se que a nota mínima de aprovação é 6;
c) A nota que teve maior frequência absoluta, ou seja, a nota que apareceu maior número
de vezes (supondo a inexistência de empate);
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//#include "GabaritoAluno.h"
#define TAM 9999

//questões
struct gabarito {
	int questao[10];
};
//aluno
struct CadAluno {
	int regAluno;
	struct{
		int questao[10];
	}respAluno;
	int nota;
};

int main (int argc, char *argv[]){
	setlocale(LC_ALL, "");
float porcAp = 0.0;
int maiorNota = 0;
int x = 0, y = 0, z = 0, i = 0;
struct gabarito gab;
struct CadAluno Aluno[TAM];
int situacaoAluno[TAM];
float porcAprov = 0.0;
float qntAprov = 0;
int cadastro = 1;
float freqAprov = 0.0;

	
	printf("================ \n");
	printf("GABARITO \n");
	printf("================ \n");
	printf ("!!! RESPOSTAS DE 1 A 5 !!! \n\n\n");
	for (x = 0; x < 10; x++){
		printf("Resposta correta da questao %d: \n", x+1);
		scanf ("%d", &gab.questao[x]);
		while (gab.questao[x] != 1 && gab.questao[x] != 2 && gab.questao[x] != 3 && gab.questao[x] != 4 && gab.questao[x] != 5 ){
			printf ("ESCOLHA UMA RESPOSTA VALIDA! \n");
			printf ("resposta da questao %d: ", x+1);
			scanf ("%d", &gab.questao[x]);		
		}
	}
	system ("cls");
	do {
	printf("== Registrar prova de aluno ==\n");	
		    Aluno[y].nota = 0;
			printf("\ncódigo do aluno: ");
			scanf("%d",&Aluno[y].regAluno);
					
				printf ("\nInforme as respostas dadas pelo aluno:\n");
				for (x = 0; x < 10; x++){
				printf("Questão [%d]", x + 1);
				scanf("%d",&Aluno[y].respAluno.questao[x]);
						while (Aluno[y].respAluno.questao[x] != 1 && Aluno[y].respAluno.questao[x] != 2 && Aluno[y].respAluno.questao[x] != 3 && Aluno[y].respAluno.questao[x] != 4 && Aluno[y].respAluno.questao[x] != 5){
						printf ("ESCOLHA UMA RESPOSTA VALIDA! \n");
						printf ("questao [%d]: ", x+1);
						scanf("%d",&Aluno[y].respAluno.questao[x]);
						}			
					if (Aluno[y].respAluno.questao[x] == gab.questao[x]){
							Aluno[y].nota++;
					}
				}
		y++;
						printf("\n\nDeseja cadastrar mais provas de alunos? \n1- sim\n0- não\n");
						scanf("%d",&cadastro);
		}while (cadastro == 1);
	system("cls");
	for (z= 0; z < y; z++){	
		printf ("===========================\n");	
		printf ("Resumo geral da avaliação\n");
		printf ("===========================\n");	
		printf ("Codigo do aluno: [%d]\n",Aluno[z].regAluno);
		printf ("Nota do aluno: [%d]\n",Aluno[z].nota);
		Aluno[z].nota >= 6 ? printf("Aprovado\n") : printf("Reprovado\n");
		if (Aluno[z].nota >= 6){
		qntAprov = qntAprov + 1;
		}
	}
	printf("==============\n");
	printf("Quadro Geral\n");
	printf("==============\n");
		 freqAprov = (qntAprov / y)*100;
		printf ("A porcentagem de aprovações foi de [%.2f%%]", freqAprov);

	}	
	
