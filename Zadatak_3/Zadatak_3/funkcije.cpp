#include "funkcije.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

float** alokacija(int red, int stupac) {
	float** matrica = new float* [red];
	for (int i = 0; i < red; i++) {
		matrica[i] = new float[stupac];
	}
	return matrica;
}

float** unos(int red, int stupac) {
	float** matrica = alokacija(red, stupac);
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < stupac; j++) {
			std::cout << "Unesi broj u matrici na poziciji red:  " << i + 1 << " i stupac " << j + 1 << std::endl;
			std::cin >> matrica[i][j];

		}
	}
	return matrica;
}


float** generiraj(int red, int stupac, int a, int b) {
	float** matrica = alokacija(red, stupac);
	srand(time(0));
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			int broj = a + rand() % (b - a + 1);
			matrica[i][j] = broj;
		}
	}
	return matrica;
}

float** zbroji(float** matrica1, float** matrica2, int red, int stupac) {
	float** matrica = alokacija(red, stupac);
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			matrica[i][j] = matrica1[i][j] + matrica2[i][j];
		}
		
	}
	return matrica;
}

float** oduzimanje (float** matrica1, float** matrica2, int red, int stupac) {
	float** matrica = alokacija(red, stupac);
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			matrica[i][j] = matrica1[i][j] - matrica2[i][j];
		}

	}
	return matrica;
}
 
float** pomnoži(float** matrica1, float** matrica2, int red1, int stupac1, int red2, int stupac2) {
	float** matrica = alokacija(red1, stupac2);
	if (stupac1 == red2) {
		for (int i = 0; i < red1; i++) {
			for (int j = 0; j < stupac2; j++) {
				matrica[i][j] = 0;
				for (int k = 0; k < stupac1; k++) {
					matrica[i][j] += matrica1[i][k] * matrica2[k][j];
				}
			}
		}
	}
	else {
		std::cout << "Matrice nisu ulanèane i množenje nije moguæe" << std::endl;
		return nullptr;
	}
	return matrica;
} 

float** transponiraj(float** matrica1, int red, int stupac) {
	float** matrica = alokacija(stupac, red);
	for (int j= 0; j< stupac; j++) {
		for (int i = 0; i < stupac; i++) {
			matrica[j][i] = matrica1[i][j];

		}
	}
	return matrica;
}

void ispis(float** matrica, int red, int stupac) {
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			std::cout << std::fixed << std::setprecision(4) << std::setw(10) << matrica[i][j];
		}
		std::cout << std::endl;
	
	}
}