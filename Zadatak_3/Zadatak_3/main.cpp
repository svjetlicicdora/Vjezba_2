#include <iostream>
#include "funkcije.h"

int main() {
	int red = 3, red2 = 3;
	int stupac = 3, stupac2 = 3;
	int a = 1, b = 100;

	float** matrica = unos(red, stupac);
	std::cout<< std::endl;

	std::cout << "Unešena matrica je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica[i][j]<<" ";
		}
		std::cout << std::endl;
	}


	float** matrica2 = generiraj(red, stupac, a, b);
	std::cout << "Generirana matrica je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica2[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;


	float** matrica3 = zbroji(matrica, matrica2, red, stupac);
	std::cout << "zbroj matrice 1 i matrice 2 je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica3[i][j]<<" ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;


	float** matrica4 = oduzimanje(matrica, matrica2, red, stupac);
	std::cout << "rezulat oduzimanja matrice 1 i matrice 2 je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica4[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	float** matrica5 = pomnoi(matrica, matrica2, red, stupac, red2, stupac2);
	std::cout << "rezultat mnoenja matrice 1 i matrice 2 je: " << std::endl;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica5[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	float** matrica6 = transponiraj(matrica5, stupac, red);
	std::cout << "Transponirana matica 5 je: " << std::endl;
	for(int i = 0; i < red; i++){
		for (int j = 0; j < stupac; j++) {
			std::cout << matrica6[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Matrica 6 ispisana u decimalnom obliku zaokruena na 4 decimale: " << std::endl;
	ispis(matrica6, red, stupac);



	for (int i = 0; i < red; i++) {
		delete[]matrica[i];
		}
	delete[]matrica;
	matrica = nullptr;

	for (int i = 0; i < red; i++) {
		delete[]matrica2[i];
	}
	delete[]matrica2;
	matrica2 = nullptr;

	for (int i = 0; i < red; i++) {
		delete[] matrica3[i];
	}
	delete[] matrica3;
	matrica3= nullptr;

	for (int i = 0; i < red; i++) {
		delete[] matrica4[i];
	}
	delete[] matrica4;
	matrica4= nullptr;

	for (int i = 0; i < red; i++) {
		delete[] matrica5[i];
	}
	delete[] matrica5;
	matrica5 = nullptr;

	for (int i = 0; i < red; i++) {
		delete[] matrica6[i];
	}
	delete[] matrica6;
	matrica6 = nullptr;

	return 0;
}