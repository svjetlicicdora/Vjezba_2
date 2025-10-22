#pragma once


float** alokacija(int red, int stupac);
float** unos(int red, int stupac);
float** generiraj(int red, int stupac, int a, int b); 
float** zbroji(float** matrica1, float** matrica2, int red, int stupac);
float** oduzimanje(float** matrica1, float** matrica2, int red, int stupac);
float** pomnoi(float** matrica1, float** matrica2, int red1, int stupac1, int red2, int stupac2);
float** transponiraj(float** matrica1, int red, int stupac);
void ispis(float** matrica, int red, int stupac);