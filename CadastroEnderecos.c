/*
Difinir a estrutura cuja representação gráfica é dada a seguir e definir os campos com os
tipo básicos necessários

Cadastro
--------------------------------------
nome       | endereço | salário      |
--------------------------------------
identidade | cpf      | estado civil |
--------------------------------------
telefone   | idade    | sexo         |
--------------------------------------

O endereço é composto de
-----------------------------
Rua     | Bairro | Cidade |
------------------
Estado  | CEP    |
------------------

a) crie um vetor com 5 elementos;
b) permita ao usuário entrar com dados para preencher esses 5 cadastros;
c) encontre a pessoa com maior idade entre os cadastros;
d) encontre as pessoas do sexo masculino;
e) encontre as pessoas com salário maior que 1000
f) imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário;

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//#include "T2ex1.h"

#define tam 1

struct Pessoa {
	char nome [30];
	unsigned long int identidade;
	char telefone[15];

		struct{
			char rua[50];
			char bairro[15];
			char cidade [15];
			char estado [15];
			long int cep;
		}Endereco;
	
	int cpf;
	int idade;
	float salario;
	char estadoCivil[15];
	char sexo[15];
};

int main (int argc, char *argv[]){
	setlocale(LC_ALL, "");
	struct Pessoa Cadastro[tam];
	int x =0;
	int i = 0;
	int maiorIdade = 0;
	unsigned long int pesquisa = 0;
	int saida = 0;


	
	for ( x = 0; x < tam; x++){
		printf("\n Insira o nome a ser cadastrado: ");
		scanf("%30[^\n]s%c*",&Cadastro[tam].nome);
		getchar();
		
		printf("\n Insira o documento de identidade do cadastrado: ");
		scanf("%ld",&Cadastro[tam].identidade);
		getchar();
		printf("\n Insira um telefone para contato: ");
		scanf("%15[^\n]s%c*",&Cadastro[tam].telefone);
		getchar();
		printf("\n insira o CPF do cadastrado: ");
		scanf("%d",&Cadastro[tam].cpf);
		getchar();
		printf("\n Informe a idade do cadastrado: ");
		scanf("%d",&Cadastro[tam].idade);
			if (Cadastro[tam].idade > maiorIdade){
				maiorIdade = Cadastro[tam].idade;
			}
		
		printf("\n Informe o salário declarado: ");
		scanf("%f",&Cadastro[tam].salario);
		getchar();
		printf("\n Informe o estado civil do cadastrado: ");
		scanf("%15[^\n]s%c*",&Cadastro[tam].estadoCivil);
		getchar();
		printf("\n Infome o sexo do cadastrado: ");
		scanf("%15[^\n]s%c*",Cadastro[tam].sexo);
		getchar();

		system("cls");

		
		printf("|- informe o endereço do cadastrado -| \n");
		
		printf("\n Rua: ");
		scanf("%50[^\n]s%c*",&Cadastro[tam].Endereco.rua);
		getchar();
		printf("\n bairro:");
		scanf("%15[\n]s%c*",&Cadastro[tam].Endereco.bairro);
		getchar();
		printf("\n Cidade: ");
		scanf("%15[^\n]s%c*",&Cadastro[tam].Endereco.cidade);
		getchar();
		printf("\n Estado (UF): ");
		scanf("%15[^\n]s%c*",&Cadastro[tam].Endereco.estado);
		getchar();
		printf("\n CEP: ");
		scanf("%ld",&Cadastro[tam].Endereco.cep);
		getchar();

	}


system("cls");
	
	
	
	printf("Digite um documento para consulta: ");
	scanf("%ld",&pesquisa);
	if(pesquisa == Cadastro[tam].cpf || pesquisa == Cadastro[tam].identidade){
		
		printf("\n");
	
		printf("[CADASTRO] \n");
		printf("--------------------------------------------------------------------------------- \n");
		printf("| [Nome: %s] | [Salário %.2fR$] |\n", Cadastro[tam].nome, Cadastro[tam].salario );
		printf("--------------------------------------------------------------------------------- \n");
		printf("| [RG: %d] | [CPF: %d] | [Estado Civil: %s] |\n", Cadastro[tam].identidade, Cadastro[tam].cpf, Cadastro[tam].estadoCivil);
		printf("--------------------------------------------------------------------------------- \n");
		printf("| [Telefone: %s] | [Idade: %d] | [Sexo: %s] |\n",Cadastro[tam].telefone, Cadastro[tam].idade, Cadastro[tam].sexo);
		printf ("\n");
		printf("[ENDEREÇO] \n");
		printf("-----------------------------------------------------------------------------------\n");
		printf("| [Rua: %s] | [Bairro: %s] | [Cidade: %s] |\n",Cadastro[tam].Endereco.rua, Cadastro[tam].Endereco.bairro, Cadastro[tam].Endereco.cidade);
		printf("-----------------------------------------------------------------------------------\n");
		printf("| [Estado: %s] | [CEP: %d] |\n",Cadastro[tam].Endereco.estado, Cadastro[tam].Endereco.cep);
		printf("-----------------------------------------------------------------------------------\n");
		
	}

	
}

// ESSE TRABALHO NÃO FOI CONCLUIDO POIS NÃO CONSEGUI CORRIGIR O ERRO DE QUEBRA DE LEITURA DA VARIÁVEL CHAR EM FORMA DE STRING