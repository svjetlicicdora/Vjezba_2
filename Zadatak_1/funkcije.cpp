int* fibonacci(int n) {
	int* niz = new int[n];

	for (int i = 0; i < n; i++) {
		if (i == 1 || i == 0)
			niz[i] = 1;
		else
			niz[i] = niz[i - 2] + niz[i - 1];
	}
	return niz;
}