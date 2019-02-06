/*	File		: Tabel.cpp
 * 	NIM / Nama	: 13515135 / Muhammad Akmal Pratama
 * 	Tanggal		: 26 Januari 2016
 * 	Topik		: Praktikum 3
 * 	Deskripsi	: ADT dengan pointer
 * */
 
#include <bits/stdc++.h>
#include "Tabel.h"

using namespace std;

Tabel::Tabel() {
	size = defaultSize;
	data_ = new int [size];
	for (int i = 0; i < size; i++) {
		data_[i] = Nil;
	}
}

Tabel::Tabel(int size) {
	this->size = size;
	data_ = new int[size];
	for (int i = 0; i < size; i++) {
		data_[i] = Nil;
	}
}

Tabel::Tabel(const Tabel& t) {
	size = t.size;
	data_ = new int[size];
	for (int i = 0; i < size; i++) {
		data_[i] = t.data_[i];
	}
}

Tabel::~Tabel() {
	delete[] data_;
	size = 0;
}

Tabel& Tabel::operator=(const Tabel& t) {
	delete[] data_;
	size = t.size;
	data_ = new int [size];
	for (int i = 0; i < size; i++) {
		data_[i] = t.data_[i];
	}
	return *this;
}

int Tabel::GetSize() {
	return size;
}

int* Tabel::GetData() {
	return data_;
}

bool Tabel::IsEmpty() {
	int i = 0;
	bool stop = false;
	while (!stop && i < size) {
		if (data_[i] != Nil) {
			stop = true;
		} else {
			i++;
		}
	}
	return !stop;
}

bool Tabel::IsFull() {
	int i = 0;
	bool stop = false;
	while (!stop && i < size) {
		if (data_[i] == Nil) {
			stop = true;
		} else {
			i++;
		}
	}
	return !stop;
}

void Tabel::Add(int x) {
	int i = 0;
	bool stop = false;
	while (!stop && i < size) {
		if (data_[i] == Nil) {
			data_[i] = x;
			stop = true;
		} else {
			i++;
		}
	}
}

int Tabel::Del(int i) {
	int x = data_[i];
	data_[i] = Nil;
	return x;
}

void Tabel::DelX(int i) {
	int j = 0;
	bool stop = false;
	while (!stop && j < size) {
		if (data_[j] == i) {
			data_[j] = Nil;
			stop = true;
		} else {
			j++;
		}
	}
}

int Tabel::NbElmt() {
	int buf = 0;
	for (int i = 0; i < size; i++) {
		if (data_[i] != Nil) {
			buf++;
		}
	}
	return buf;
}

int Tabel::Sum() {
	int sum = 0;
	
	for (int i = 0; i < size; i++) {
		if (data_[i] != Nil) {
			sum = sum + data_[i];
		}
	}
	return sum;
}

bool Tabel::Or() {
	bool buf = false;
	for (int i = 0; i < size; i++) {
		if (data_[i] != Nil) {
			buf = buf || data_[i];
		}
	}
	return buf;
}

Tabel Tabel::Accumulate() {
	Tabel t(1);
	t.data_[0] = Sum();
	return t;
}

bool Tabel::IsEq(Tabel t) {
	if (size != t.size) {
		return false;
	} else {
		int i = 0;
		while (i < size && data_[i] == t.data_[i]) {
			i++;
		}
		i = i - 1;
		return data_[i] == t.data_[i];
	}
}

bool Tabel::IsBit(int i) {
	return data_[i] == 0 || data_[i] == 1 || data_[i] == Nil;
}
