#include <iostream>
#include <locale.h>
#include <string>

int verificaString(const std::string& str, char caractere1, char caractere2);

int main()
{
	setlocale(LC_ALL, "portuguese");

	std::string stringInformada;
	int ocorrenciasEncontradas;

	std::cout << "Informe uma frase ou sequência de caracteres para que possamos verificar se nesta String existe a letra a/A:\n";
	std::getline(std::cin, stringInformada);

	ocorrenciasEncontradas = verificaString(stringInformada, 'a', 'A'); //caracteres informados como parâmetro da função para permitir alteração mais conveniente da busca;
		
	std::cout << "\nFoi identificado um total de " << ocorrenciasEncontradas << " ocorrências para os caracteres a e A.";

	return 0;

}

int verificaString(const std::string& str, char caractere1, char caractere2)
{
	int ocorrencias_de_a = 0;
	int ocorrencias_de_A = 0;
	std::size_t pos_a = str.find(caractere1); //atribuindo a pos_a o valor de posição do índice na String da primeira ocorrência de A;
	std::size_t pos_A = str.find(caractere2);

	/* Enquanto a função .find() iterar pela String e encontrar ocorrências de a, ou de A, irá incrementar o contador de ocorrências
	Cada iteração subsequente retoma a busca no índice seguinte ao último onde uma ocorrência foi detectada, ficando a cargo do 
	acumulador "ocorrencias_de_a" somar o número de	ocorrencias.*/
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