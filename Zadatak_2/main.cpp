#include <iostream>
#include "funkcije.h"


int main() {
	int n = 5;
	Vektor novi_v = novi_vektor(n);

	
	std::cout << "Kapacitet vektora : " << novi_v.fiz<< std::endl;
	std::cout << "Logièka velièina: " << novi_v.log << std::endl;

	for (int i = 0; i < 10; i++) {
		kraj(novi_v, i * 10);
	}
	std::cout << std::endl;
	std::cout << "Elementi vektora: ";
	for (int i = 0; i < novi_v.log; i++) {
		std::cout << novi_v.niz[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Kapacitet nakon dodavanja novih elemata: " << novi_v.fiz << std::endl;
	

	std::cout << "Logièka velièina nakon dodavanja: " << novi_v.log << std::endl;
	std::cout << std::endl;

	std::cout << "Niz nakon uklanjanja zadnjeg elementa:  " << std::endl;
	ukloni_zadnji(novi_v);
	for (int i = 0; i < novi_v.log; i++) {
		std::cout << novi_v.niz[i] << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Prvi element niza Vektora v je: " << prvi(novi_v) << std::endl;

	std::cout << std::endl;

	std::cout << "Zadnji element niza Vektora v je: " << zadnji(novi_v) << std::endl;

	std::cout << std::endl;

	std::cout << "Logièka veleèina Vektora v je: " << velicina(novi_v) << std::endl;

	obrisi(novi_v);

}