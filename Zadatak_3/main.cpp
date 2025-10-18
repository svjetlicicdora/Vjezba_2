#include <iostream>
#include "funkcije.h"

int main() {
	int red = 3;
	int stupac = 3;
	int a = 1, b = 100;

	/*float** matrica = unos(red, stupac);
	std::cout<< std::endl;

	std::cout << "Unešena matrica je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica[i][j]<<" ";
		}
		std::cout << std::endl;
	}*/


	float** matrica2 = generiraj(red, stupac, a, b);
	std::cout << "Generirana matrica je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica2[i][j] << " ";
		}
		std::cout << std::endl;
	}



	/*for (int i = 0; i < red; i++) {
		delete[]matrica[i];
		}
	delete[]matrica;*/

	for (int i = 0; i < red; i++) {
		delete[]matrica2[i];
	}
	delete[]matrica2;
	return 0;
}
