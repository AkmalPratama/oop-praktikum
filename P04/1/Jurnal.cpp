#include <iostream>
#include <assert.h>
#include "Artikel.hpp"
#include "Jurnal.hpp"

using namespace std;

Jurnal::Jurnal() {
	size = 0;
	data = new Artikel [DEFSIZE];
}
Jurnal::Jurnal(Artikel* A, int size) {
	this->size = size;
	data = new Artikel [size];
}
Jurnal::Jurnal(const Jurnal& J) {
	size = J.size;
	data = new Artikel [size];
	for (int i = 0; i < size; i++) {
		data[i] = J.data[i];
	}
}
Jurnal::~Jurnal() {
	delete [] data;
}
Jurnal& Jurnal::operator=(const Jurnal& rhs) {
	if (this != &rhs) {
		delete [] data;
		size = rhs.size;
		data = new Artikel [size];
		for (int i = 0; i < size; i++) {
			data[i] = rhs.data[i];
		}
	}
	return *this;
}

Artikel Jurnal::getData(int idx) {
	return data[idx];
}
int Jurnal::getSize() {
	return size;
}
void Jurnal::setData(int idx, Artikel a) {
	data[idx] = a;
}
void Jurnal::setSize(int size) {
	this->size = size;
}
int Jurnal::findByTahun(int tahun) {
	int i;
	for (i = 0; i < size; i++) {
		if (data[i].getTahun() == tahun) {
			break;
		}
	}
	return i;
}
void Jurnal::add(Artikel a) {
	size++;
	setData(size-1, a);
}
void Jurnal::insert(int idx, Artikel a) {
	for (int i = size-1; i >= idx; i--) {
		data[i+1] = data[i];
	}
	size++;
	setData(idx, a);
}
void Jurnal::print() {
	for (int i = 0; i < size; i++) {
		cout << "Konten " << i+1 << endl;
		data[i].print();
	}
}
