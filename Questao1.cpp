#include <iostream>
#include <locale.h>

int geraSeqFibonacci(int checaFibonacci, int numA, int numB);

int main()
{
	setlocale(LC_ALL, "portuguese");

	std::cout << "Exerc�cio 1:\n";
	std::cout << "1) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia. IMPORTANTE: Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;\n";
	std::cout << "\n\nCom base no enunciado, informe um n�mero para que possamos checar se o n�mero pertence ou n�o � sequ�ncia: ";
	
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
		std::cout << "O n�mero fornecido n�o pertence � sequ�ncia de Fibonacci.";
		return 0;
	}
	else if (num == checaFibonacci)
	{
		std::cout << "O n�mero " << checaFibonacci << " pertence � sequ�ncia de Fibonacci.";
		return 0;
	}


}