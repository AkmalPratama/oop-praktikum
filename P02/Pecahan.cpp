/*	File 		: Pecahan.cpp
 * 	NIM / Nama	: 13515135 / Muhammad Akmal Pratama
 * 	Tanggal		: 26 Januari 2016
 * 	Topik		: Praktikum 2
 * 	Deskripsi	: Implementasi class pecahan
 * */
#include <bits/stdc++.h>
#include "Pecahan.h"

using namespace std;

int GCD (int nx, int ny) {
  int n1, n2;
  n1=nx; n2=ny;
  while(n1 != n2)
  {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
  }
  return n1;
}

int LCM (int nx, int ny) {
	return ((nx * ny) / GCD(nx, ny));
}

void norm(int &pn, int &pa, int &pb) {
	int a, b;
	
	if (pa > 0 && pb > 0) {
		int gcd = GCD(pa, pb);
		a = pa / gcd;
		b = pb / gcd;
	} else {
		a = pa;
		b = pb;
		if (pa == 0) {
			b = 1;
		}
	}
	pn += a / b;
	pa = a % b;
	pb = b;
}

Pecahan::Pecahan() {
	n = 1;
	a = 0;
	b = 1;
}

Pecahan::Pecahan(int n, int a, int b) {
	this->a = a;
	this->b = b;
	this->n = n;
}

int Pecahan::getBulat() {
	norm(n, a, b);
	return n;
}

int Pecahan::getPembilang() {
	norm(n, a, b);
	return a;
}

int Pecahan::getPenyebut() {
	norm(n, a, b);
	return b;
}

void Pecahan::setBulat(int _n) {
	n = _n;
}

void Pecahan::setPembilang(int _a) {
	a = _a;
}

void Pecahan::setPenyebut(int _b) {
	b = _b;
}

bool Pecahan::isValid(int n, int a, int b) {
	return n >= 0 && a >= 0 && b >= 1;
}

Pecahan Pecahan::addWithThis(Pecahan P) {
	Pecahan p;
	
	int pa = (getPembilang() * P.getPenyebut()) + (getPenyebut() * P.getPembilang());
	int pb = getPenyebut() * P.getPenyebut();
	
	p.setBulat(getBulat() + P.getBulat());
	p.setPembilang(pa);
	p.setPenyebut(pb);
	
	return p;
}

void Pecahan::accumulate(Pecahan P) {
	Pecahan p = addWithThis(P);
	setBulat(p.getBulat());
	setPembilang(p.getPembilang());
	setPenyebut(p.getPenyebut());
}

Pecahan Pecahan::add(Pecahan P1, Pecahan P2) {
	return P1.addWithThis(P2);
}

bool Pecahan::isEQMe(Pecahan P) {
	norm(n, a, b);
	return P.value() == value();
}

bool Pecahan::isGTMe(Pecahan P) {
	norm(n, a, b);
	return P.value() > value();
}

bool Pecahan::isLTMe(Pecahan P) {
	norm(n, a, b);
	return P.value() < value();
}

float Pecahan::value() {
	
	return float(a) / float(b) + float(n);
}
