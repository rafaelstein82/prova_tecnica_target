#include <iostream>
#include <locale.h>
#include <string>

int verificaString(const std::string& str, char caractere1, char caractere2);

int main()
{
	setlocale(LC_ALL, "portuguese");

	std::string stringInformada;
	int ocorrenciasEncontradas;

	std::cout << "Informe uma frase ou sequ�ncia de caracteres para que possamos verificar se nesta String existe a letra a/A:\n";
	std::getline(std::cin, stringInformada);

	ocorrenciasEncontradas = verificaString(stringInformada, 'a', 'A'); //caracteres informados como par�metro da fun��o para permitir altera��o mais conveniente da busca;
		
	std::cout << "\nFoi identificado um total de " << ocorrenciasEncontradas << " ocorr�ncias para os caracteres a e A.";

	return 0;

}

int verificaString(const std::string& str, char caractere1, char caractere2)
{
	int ocorrencias_de_a = 0;
	int ocorrencias_de_A = 0;
	std::size_t pos_a = str.find(caractere1); //atribuindo a pos_a o valor de posi��o do �ndice na String da primeira ocorr�ncia de A;
	std::size_t pos_A = str.find(caractere2);

	/* Enquanto a fun��o .find() iterar pela String e encontrar ocorr�ncias de a, ou de A, ir� incrementar o contador de ocorr�ncias
	Cada itera��o subsequente retoma a busca no �ndice seguinte ao �ltimo onde uma ocorr�ncia foi detectada, ficando a cargo do 
	acumulador "ocorrencias_de_a" somar o n�mero de	ocorrencias.*/
	while ((pos_a != std::string::npos) || (pos_A != std::string::npos)) 
	{
		if (pos_a != std::string::npos)
		{
			ocorrencias_de_a++;
			pos_a = str.find(caractere1, pos_a + 1);
		}
		if (pos_A != std::string::npos)
		{
			ocorrencias_de_A++;
			pos_A = str.find(caractere2, pos_A + 1);
		}
	}

	int ocorrenciasTotal = ocorrencias_de_A + ocorrencias_de_a;

	return ocorrenciasTotal;

}