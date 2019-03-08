#include "RestoranRamen.hpp"

using namespace std;
// Menambah jumlah order yang dipesan oleh meja n, dengan harga p
// Jika meja sudah diisi maka akan menambah total yang telah dipesan
void RestoranRamen::tambahOrder(int n, int p) {
	map<int, int>::iterator itr = daftarMeja.begin();
	itr = daftarMeja.find(n);
	if (itr != daftarMeja.end()) {
		itr->second += p;
	} else {
		daftarMeja.insert(pair<int,int>(n, p));
	}
}

// Mengembalikan total harga pesanan pada meja n, menghapus entri untuk meja tersebut
int RestoranRamen::tutupOrder(int n) {
	int total = daftarMeja[n];
	daftarMeja.erase(n);
	return total;
}

// Mengembalikan total harga pesanan pada meja n
int RestoranRamen::cekTotal(int n) {
	return daftarMeja[n];
}

// Mengembalikan jumlah meja yang terisi saat itu
// Restoran mungkin kosong
int RestoranRamen::totalMeja() {
	int cnt = 0;
	map<int, int>::iterator itr;
	for (itr = daftarMeja.begin(); itr != daftarMeja.end(); itr++) {
		cnt++;
	}
	return cnt;
}

// Mencetak semua meja yang terisi pada restoran diakhiri dengan new line
// Contoh : 
/*
	Meja 1 = 5000
	Meja 2 = 3000
	Meja 4 = 10000
*/
// Jika restoran kosong akan mencetak "Restoran kosong" diakhiri new line
void RestoranRamen::cetakMeja() {
	if (totalMeja() == 0) {
		cout << "Restoran kosong" << endl;
	} else {
		map<int, int>::iterator itr;
		for (itr = daftarMeja.begin(); itr != daftarMeja.end(); itr++) {
			cout << "Meja " << itr->first << " = " << itr->second << endl;
		}
	}
}
