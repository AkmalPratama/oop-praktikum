#include <bits/stdc++.h>
#include "Matriks.h"

using namespace std;

int main() {
	
	int x = 2;
	int y = 3;
	int z = 0;

	Matriks m(x, y);

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			m.SetData(i, j, z);
			z++;
		}
	}
	
	Matriks m1(1, 1);

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 1; j++) {
			m1.SetData(i, j, z);
			z++;
		}
	}
	
	cout << m.IsSimetri() << endl;
	
	return 0;
}
