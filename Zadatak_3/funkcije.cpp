#include "funkcije.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

float** alokacija(int red, int stupac) {
	float** matrica = new float* [red];
	for (int i = 0; i < red; i++) {
		matrica[i] = new float[stupac];
	}
	return matrica;
}

float** unos(int red, int stupac) {
	float** matrica = alokacija(red, stupac);
	for(int i=0;i<red;i++)
	{
		for (int j = 0; j < stupac; j++) {
			std::cout << "Unesi broj u matrici na poziciji red:  " << i+1 <<" i stupac " << j+1 << std::endl;
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