#include <bits/stdc++.h>
#include "tabel_generik.h"
#include "kamus.h"

using namespace std;

Kamus::Kamus (int size) : size (size) {
    t_key = new TabelGenerik<int> (nil_key);
    t_value = new TabelGenerik<string> (nil_value);
}

Kamus::~Kamus () {
    delete t_key;
    delete t_value;
}

void Kamus::Print () {

}

void Kamus::Add (int k, string v) {
    t_key->Add(k);
    t_value->Add(v);
}

void Kamus::Add (int i, int k, string v) {
    t_key->GetData()[i] = k;
    t_value->GetData()[i] = v;
}

void Kamus::Del (int k) {
	int* first = t_key->GetData();
	int* last = first + size;
	int* ptr = find(first, last, k);
	
	int id = ptr - first;
	t_key->Del(id);
	t_value->Del(id);
}

void Kamus::Del (string v) {
	string* first = t_value->GetData();
	string* last = first + size;
	string* ptr = find(first, last, v);
	
	int id = ptr - first;	
	t_key->Del(id);
	t_value->Del(id);
}

void Kamus::Del (int k, string v) {
	int id = Search(k, v);
	t_key->Del(id);
	t_value->Del(id);
}

int Kamus::Search (int k, string v) {
	int* first = t_key->GetData();
	int* last = first + size;
	int* ptr = find(first, last, k);
	
	int id = ptr - first;
    return id;
}
