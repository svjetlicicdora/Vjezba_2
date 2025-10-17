#pragma once

struct Vektor {
	int* niz;
	int log;
	int fiz;
};

Vektor novi_vektor(int n);
void kraj(Vektor& v,int n);
void obrisi(Vektor& v);
void ukloni_zadnji(Vektor& v);
int prvi(Vektor& v);
int zadnji(Vektor& v);
int velicina(Vektor& v);