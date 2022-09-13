//LISTA 4

//5

//a - Faça uma função para ler, validar e retornar o salário de um funcionário. O salário é 
//    um número real maior ou igual a 1212,00
#include <stdio.h>
float leValidaSal()
{
	float sal;
	do
	{
		printf("Digite salario >= 1212.00");
		scanf("%f",&sal);
	}while(sal < 1212.00);
	
	return sal;
}

//b - Faça uma função que receba como parâmetro a quantidade de funcionários de um departamento
//    de uma empresa. Esta função deverá ler, para cada funcionário, a matrícula e o salário,
//    exibir a matrícula, o salário e a quantidade de funcionários que ganham o maior salário do
//    departamento e retornar a soma dos salários dos funcionários do departamento.
float funcionarios(int qtd)
{
	int cont,matr,qtdigual;
	float maior = 0 , somasal = 0, sal;
	for(cont = 0; cont < qtd; cont++)
	{
		printf("Digite matricula:");
		scanf("%d",&matr);
		sal = leValidaSal();
		if(sal > maior)
		{
			maior = sal;
			qtdigual = 1;
		}
		else
		{
			if(sal == maior)
			    qtdigual ++; // qtdigual = qtdigual + 1
		}
		printf("\nMatricula:%d\tSalario:%.1f",matr,sal);
		somasal += sal;
	}
	
	printf("\nTotal maior salario: %d", qtdigual);
	return somasal;
}

//c - Faça um programa, utilizando as funções acima, para processar os 10 departamentos de
//    uma empresa. O programa deverá ler, para cada departamento, a quantidade de funcionários
//    e para cada funcionário a matrícula e o salário. O programa deverá exibir, para cada
//    departamento: a matrícula, o salário e a quantidade de funcionários que ganham o maior salário
//    do departamento e a soma dos salários dos funcionários. Ao final, o programa deverá exibir
//    a soma de todos os salários de todos os funcionários da empresa.
int main()
{
	float somageral = 0, somasal;
	int cont, qtd;
	for(cont = 0; cont <10 ; cont++)
	{
		printf("Digite quantidade funcionarios:");
		scanf("%d", &qtd);
		somasal = funcionarios(qtd);
		printf("\nSoma dos salarios:%.2f", somasal);
		somageral += somasal; // somageral = somageral + somasal
	}
	printf("\nSoma geral: %.2f", somageral);
	return 0;
}

//6 - Um site especializado em programação em C possui vários arquivos disponíveis para download.
//    Os usuários podem fazer download dos arquivos desejados, pagando um preço fixo por MByte. 
//    Faça um programa, utilizando a função abaixo, para processar os downloads dos usuários do site.
//    Inicialmente, o programa deverá ler o preço qe o site cobra por Mbytes. Para cada usuário, o programa
//    deverá ler a quantidade de downloads desejada e para cada download o tamanho em MBytes e exibir a quantidade
//    de downloads que são até 2 MBytes e o valor a ser pago pelos downloads. Término da leitura dos usuários: quantidade
//    downloads desejada = 0. No final, o programa deverá fornecer o valor médio pago pelos usuários. Faça uma função para
//    processar os downloads de um usuário. A função recebe como parâmetro a quantidade de downloads de um usuário. A função
//    deverá ler o tamanho de cada download, exibir a quantidade de downloads que são até 2 MBytes e retornar o tamanho total
//    dos downloads do usuário.

#include<stdio.h>

float downloads(int qtd)
{
	float soma, tam = 0;
	float qtdate2, cont = 0;
	for(cont = 0; cont < qtd; cont++)
	{
		printf("digite tamanho");
		scanf("%d",&tam);
		soma += tam;
		if(tam <= 2)
		{
			qtdate2++;
			printf("Quantidade ate 2 mbytes: ");
			
	    }
	}
	return soma;	
}

int main()
{
	int usuarios, qtd;
	float valpagogeral, preco, tamtotal, valpago, md;
	usuarios = valpagogeral = 0;
	printf("digite o preco:");
	scanf("%f", &preco);
	printf("digite quantidade. 0 para encerrar");
	scanf("%d", &qtd);
	
	while(qtd != 0)
	{
		tamtotal = downloads(qtd);
		valpago = tamtotal*preco;
		printf("\nvalor pago:%f", valpago);
		usuarios++;
		valpagogeral += valpago;
		printf("digite quantidade de downloads para encerrar");
		scanf("%d", &qtd);
	}
	if(usuarios != 0 )
	{
		md = valorpagogeral/usuarios;
		printf("\nvalor medio pago%f", md);
	}
	
	return 0;
}

// 7 - Faça um programa, utilizando as funções descritas, que calcula e exibe o salário de 20
//     pessoas. O programa deverá apresentar para cada pessoa, um menu com as opções abaixo, calcular
//     e exibir o salário. Faça a função menu que exibe as opções abaixo, lê e retorna a opção escolhida
//     pelo usuário validada. Para cada uma das opções do menu o seu programa deverá chamar a função 
//     apropriada para o cálculo do salário. Nestas funções deverão ser lidos os dados de entrada apropriados
//     e o valor do salário deverá ser retornado. O menu deverá possuir as seguintes opções:

//        1- Horista
//        2- Contratado
//        3- Prestador de serviço

#include<stdio.h>

int menu(int opcao)
{
	int opcao;
	float qtdate2, cont = 0;
	do
	{
		printf("\n1-horista\n2-contratado\n3-prestador");
		printf("digite a opcao desejada:");
		scanf("%d", &opcao);
	}while(opcao<1 || opcao>3);
	
	return opcao;
}

float horista()
{
	float qtd,valor;
	printf("digite valor e quantidade de horas");
	scanf("%f%f",&valor,&qtd);
	
	return valor*qtd;
}

float contratado()
{
	float sal;
	printf("digite salario: ");
	scanf("%f",&sal);
	
	return sal;
}
	
float prestador()
{
	float soma = 0, valor;
	int qtd, cont;
	printf("digite a quantidade de servicos:");
	scanf("%d",&qtd);
	
	for(cont = 0; cont < qtd ; cont++)
	{
		printf("digite o valor do servico:");
		scanf("%f", &valor);
		soma += valor;
	}
	
	return soma
}

int main()
{
	int cont,op;
	float salario;
	
	for(cont = 0 ; cont <20 ; cont++)
	{
		op = menu()
		
		switch(op)
		{
			case 1: salario = horista();
				    break;
				    
			case 2: salario = contratado();
			        break;
			        
			case 3: salario = prestador();
			        break;
		}
		
		printf("\nSalario:%.2f", salario);
	}
	
	return 0;
		
}

