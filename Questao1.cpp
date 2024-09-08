#include <iostream>
#include <locale.h>

int geraSeqFibonacci(int checaFibonacci, int numA, int numB);

int main()
{
	setlocale(LC_ALL, "portuguese");

	std::cout << "Exercício 1:\n";
	std::cout << "1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência. IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;\n";
	std::cout << "\n\nCom base no enunciado, informe um número para que possamos checar se o número pertence ou não à sequência: ";
	
	int limiteFibonacci{ 0 };
	std::cin >> limiteFibonacci;
	static int numA = 0, numB = 1;
	geraSeqFibonacci(limiteFibonacci, numA, numB);

	return 0;

}

int geraSeqFibonacci(int checaFibonacci, int numA, int numB)
{
	int num = 0;
	num = numA + numB;
	numA = numB;
	numB = num;

	if (num < checaFibonacci)
		return geraSeqFibonacci(checaFibonacci, numA, numB);
	else if (num >= checaFibonacci && num != checaFibonacci)
	{
		std::cout << "O número fornecido não pertence à sequência de Fibonacci.";
		return 0;
	}
	else if (num == checaFibonacci)
	{
		std::cout << "O número " << checaFibonacci << " pertence à sequência de Fibonacci.";
		return 0;
	}


}