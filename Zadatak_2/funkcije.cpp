#include "funkcije.h"

Vektor novi_vektor(int n) {
	Vektor v;
	v.niz = new int[n];
	v.log = 0;
	v.fiz = n;
	return v;
}

void obrisi(Vektor& v) {
	delete[]v.niz;
	v.niz = nullptr;
	v.log = 0;
	v.fiz = 0;
}

void kraj(Vektor& v, int broj) {
	if (v.fiz == v.log) {
		int* novi_niz = new int[v.fiz * 2];
		for (int i = 0; i < v.log; i++) {
			novi_niz[i] = v.niz[i];
		}
			delete[] v.niz;
			v.niz = novi_niz;
			v.fiz *= 2;}
	v.niz[v.log] = broj;
	v.log++;
}

void ukloni_zadnji(Vektor& v) {
	if (v.log > 0)
		v.log--;
}

int prvi(Vektor& v) {
	if (v.log > 0)
		return v.niz[0];
}

int zadnji(Vektor& v) {
	if (v.log > 0)
		return v.niz[v.log-1];
}

int velicina(Vektor& v)
{
	return v.log;
}