#include <cstring>
#include <iostream>
#include "Artikel.hpp"

using namespace std;

Artikel::Artikel() {
	judul = new char [DEFSIZE];
	for (int i = 0; i < DEFSIZE; i++) {
		judul[i] = '\0';
	}
	penulis = new char [DEFSIZE];
	for (int i = 0; i < DEFSIZE; i++) {
		penulis[i] = '\0';
	}
	tahun = 0;
}

Artikel::Artikel(char* j, char* p, int t) {
	judul = new char [DEFSIZE];
	strcpy(judul, j);
	penulis = new char [DEFSIZE];
	strcpy(penulis, p);
	tahun = t;
}

Artikel::Artikel(const Artikel& a) {
	penulis = new char [DEFSIZE];
	strcpy(penulis, a.penulis);
	judul = new char [DEFSIZE];
	strcpy(judul, a.judul);
	tahun = a.tahun;
}
Artikel::~Artikel() {
	delete [] penulis;
	delete [] judul;
}
Artikel& Artikel::operator=(const Artikel& a) {
	if (this != &a) {
		delete [] penulis;
		delete [] judul;
		penulis = new char [DEFSIZE];
		judul = new char [DEFSIZE];
		strcpy(judul, a.judul);
		strcpy(penulis, a.penulis);
		tahun = a.tahun;
	}
	return * this;
}

char* Artikel::getJudul() {
	return judul;
}
char* Artikel::getPenulis() {
	return penulis;
}
int Artikel::getTahun() {
	return tahun;
}
void Artikel::setJudul(char* j) {
	strcpy(judul, j);
}
void Artikel::setPenulis(char* p) {
	strcpy(penulis, p);
}
void Artikel::setTahun(int t) {
	tahun = t;
}

void Artikel::print() {
	cout << penulis << ". " << tahun << ". \"" << judul << "\"."<< endl;
}

