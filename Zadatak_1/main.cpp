#include <iostream>
#include "funkcije.h"

int main() {
	int n = 10;
	int* niz = fibonacci(n);

	for (int i = 0; i < n; ++i) {
		std::cout << niz[i] << " " << std::endl;
	}
	delete[]niz;
	niz = nullptr;
	return 0;

}