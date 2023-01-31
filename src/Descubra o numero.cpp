//============================================================================
// Name        : Descubra.cpp
// Author      : othon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	int num_maquina = 1+rand()%10;

	int num_pessoal;

	std::cout << "escolha um numero entre 1 e 10: ";
	std::cin >> num_pessoal;

	std::string comparacao_num = (num_maquina==num_pessoal) ? "numeros iguais" : "numeros diferentes";
	std::cout << endl << "numero maquina: " << num_maquina << " numero pessoa: " << num_pessoal << endl;
	std::cout << comparacao_num;


	return 0;
}
