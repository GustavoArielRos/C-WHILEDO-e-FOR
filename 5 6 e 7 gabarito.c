//LISTA 4

//5

//a - Fa�a uma fun��o para ler, validar e retornar o sal�rio de um funcion�rio. O sal�rio � 
//    um n�mero real maior ou igual a 1212,00
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

//b - Fa�a uma fun��o que receba como par�metro a quantidade de funcion�rios de um departamento
//    de uma empresa. Esta fun��o dever� ler, para cada funcion�rio, a matr�cula e o sal�rio,
//    exibir a matr�cula, o sal�rio e a quantidade de funcion�rios que ganham o maior sal�rio do
//    departamento e retornar a soma dos sal�rios dos funcion�rios do departamento.
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

//c - Fa�a um programa, utilizando as fun��es acima, para processar os 10 departamentos de
//    uma empresa. O programa dever� ler, para cada departamento, a quantidade de funcion�rios
//    e para cada funcion�rio a matr�cula e o sal�rio. O programa dever� exibir, para cada
//    departamento: a matr�cula, o sal�rio e a quantidade de funcion�rios que ganham o maior sal�rio
//    do departamento e a soma dos sal�rios dos funcion�rios. Ao final, o programa dever� exibir
//    a soma de todos os sal�rios de todos os funcion�rios da empresa.
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

//6 - Um site especializado em programa��o em C possui v�rios arquivos dispon�veis para download.
//    Os usu�rios podem fazer download dos arquivos desejados, pagando um pre�o fixo por MByte. 
//    Fa�a um programa, utilizando a fun��o abaixo, para processar os downloads dos usu�rios do site.
//    Inicialmente, o programa dever� ler o pre�o qe o site cobra por Mbytes. Para cada usu�rio, o programa
//    dever� ler a quantidade de downloads desejada e para cada download o tamanho em MBytes e exibir a quantidade
//    de downloads que s�o at� 2 MBytes e o valor a ser pago pelos downloads. T�rmino da leitura dos usu�rios: quantidade
//    downloads desejada = 0. No final, o programa dever� fornecer o valor m�dio pago pelos usu�rios. Fa�a uma fun��o para
//    processar os downloads de um usu�rio. A fun��o recebe como par�metro a quantidade de downloads de um usu�rio. A fun��o
//    dever� ler o tamanho de cada download, exibir a quantidade de downloads que s�o at� 2 MBytes e retornar o tamanho total
//    dos downloads do usu�rio.

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

// 7 - Fa�a um programa, utilizando as fun��es descritas, que calcula e exibe o sal�rio de 20
//     pessoas. O programa dever� apresentar para cada pessoa, um menu com as op��es abaixo, calcular
//     e exibir o sal�rio. Fa�a a fun��o menu que exibe as op��es abaixo, l� e retorna a op��o escolhida
//     pelo usu�rio validada. Para cada uma das op��es do menu o seu programa dever� chamar a fun��o 
//     apropriada para o c�lculo do sal�rio. Nestas fun��es dever�o ser lidos os dados de entrada apropriados
//     e o valor do sal�rio dever� ser retornado. O menu dever� possuir as seguintes op��es:

//        1- Horista
//        2- Contratado
//        3- Prestador de servi�o

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

