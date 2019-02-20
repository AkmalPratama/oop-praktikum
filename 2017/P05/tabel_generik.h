#ifndef TABEL_GENERIK_H
#define TABEL_GENERIK_H

#include <bits/stdc++.h>

using namespace std;

template <typename atype>
class TabelGenerik {
public:
	/** @brief Constructor
	  * elemen tabel diinisialisasi dengan nil
	  * @param nil_value Nilai yang merepresentasikan nilai nil
	  */
	TabelGenerik(atype nil_value);
	
	/** @brief Constructor
	  * Menghasilkan sebuah tabel baru yang kosong dengan ukuran yang ditentukan
	  * @param nil_value Nilai yang merepresentasikan nilai nil
	  * @param size Ukuran tabel. Ukuran harus > 0
	  */
	TabelGenerik(atype nil_value, int size);
	
	/** @brief Copy constructor
	  * Menghasilkan sebuah tabel baru yang kosong dengan ukuran yang ditentukan
	  * @param t Tabel yang disalin
	  */
	TabelGenerik(const TabelGenerik<atype>& t);
	
	/** @brief Destruktor
	  * Mengembalikan memori telah dialokasi
	  */
	~TabelGenerik();
	
	/** @brief Assign Tabel Generik
	  * Menjamin tidak terjadi bitwise copy
	  * @param t Tabel yang di-assign
	  */
	TabelGenerik<atype>& operator=(const TabelGenerik<atype>& t);
	
	/** @brief Mendapatkan ukuran tabel
	  * @return Ukuran tabel
	  */
	int GetSize();
	
	/** @brief Mendapatkan data tabel
	  * @return Penunjuk data tabel
	  */
	atype* GetData();
	
	/** @brief Mengecek kekosongan tabel
	  * @return True jika tabel kosong, false jika tidak
	  */
	bool IsEmpty();
	
	/** @brief Mengecek kepenuhan tabel
	  * @return True jika tabel penuh, false jika tidak
	  */
	bool IsFull();
	
	/** @brief Menambah elemen ke tabel
	  * @param x Elemen yang ditambahkan
	  */
	void Add(atype x);
	
	/** @brief Menghapus elemen dari tabel
	  * @param i Indeks elemen yang dihapus
	  * @return Elemen yang dihapus
	  */
	atype Del(int i);
	
	/** @brief Menghapus elemen x dari tabel
	  * @param x Elemen yang dihapus
	  */
	void DelX(atype x);
	
	/** @brief Menambah elemen ke tabel
	  * @param x Elemen yang ditambahkan
	  */
	int NbElmt();
	
	/** @brief Mengecek kesamaan tabel
	  * @param tabel Tabel yang diacu
	  * @return True jika tabel sama, false jika tidak
	  */
	bool IsEq(TabelGenerik<atype> tabel);
	
	/** @brief Mendapatkan total tabel yang pernah dibuat
	  * @return Total tabel
	  */
	static int NumberTabelGenerik();

private:
	/** Representasi nilai kosong */
	const atype nil;
	/** default ukuran tabel untuk ctor tanpa parameter */
	const int default_size= 50;
	/** ukuran tabel, tak boleh diubah */
	const int size;
	/** Data yang tersimpan dalam tabel */
	atype* data;
	/** Banyaknya tabel yang pernah diciptakan melalui constructor dan copy constructor */
	static int number_tab;
};

template<typename atype>
int TabelGenerik<atype>::number_tab = 0;

template<typename atype>
TabelGenerik<atype>::TabelGenerik (atype nil_value) : nil(nil_value), size(default_size) {
	data = new atype[size];
	for (int i = 0; i < size; i++) {
		data[i] = nil;
	}
	number_tab++;
}

template<typename atype>
TabelGenerik<atype>::TabelGenerik(atype nil_value, int size) : nil(nil_value), size(size) {
	data = new atype[size];
	for (int i = 0; i < size; i++) {
		data[i] = nil;
	}
	number_tab++;
}

template<typename atype>
TabelGenerik<atype>::TabelGenerik(const TabelGenerik<atype>& t) : nil(t.nil_value), size(t.size) {
	data = new atype[size];
	for (int i = 0; i < size; i++) {
		data[i] = t.data[i];
	}
	number_tab++;	
}

template<typename atype>
TabelGenerik<atype>::~TabelGenerik() {
	delete [] data;
}

template<typename atype>
TabelGenerik<atype>& TabelGenerik<atype>::operator=(const TabelGenerik<atype>& t) {
	delete[] data;
	size = t.size;
	data = new int [size];
	for (int i = 0; i < size; i++) {
		data[i] = t.data[i];
	}
	return *this;	
}

template<typename atype>
int TabelGenerik<atype>::GetSize() {
	return size;
}

template<typename atype>
atype* TabelGenerik<atype>::GetData() {
	return data;
}

template<typename atype>
bool TabelGenerik<atype>::IsEmpty() {
	int i = 0;
	bool stop = false;
	while (!stop && i < size) {
		if (data[i] != nil) {
			stop = true;
		} else {
			i++;
		}
	}
	return !stop;	
}

template<typename atype>
bool TabelGenerik<atype>::IsFull() {
	int i = 0;
	bool stop = false;
	while (!stop && i < size) {
		if (data[i] == nil) {
			stop = true;
		} else {
			i++;
		}
	}
	return !stop;	
}

template<typename atype>
void TabelGenerik<atype>::Add (atype x) {
	int i = 0;
	bool stop = false;
	while (!stop && i < size) {
		if (data[i] == nil) {
			data[i] = x;
			stop = true;
		} else {
			i++;
		}
	}	
}

template<typename atype>
atype TabelGenerik<atype>::Del (int i) {
	atype x = data[i];
	data[i] = nil;
	return x;
}
	
template<typename atype>
void TabelGenerik<atype>::DelX (atype x) {
	int j = 0;
	bool stop = false;
	while (!stop && j < size) {
		if (data[j] == x) {
			data[j] = nil;
			stop = true;
		} else {
			j++;
		}
	}	
}

template<typename atype>
int TabelGenerik<atype>::NbElmt () {
	int buf = 0;
	for (int i = 0; i < size; i++) {
		if (data[i] != nil) {
			buf++;
		}
	}
	return buf;	
}

template<typename atype>
bool TabelGenerik<atype>::IsEq(TabelGenerik<atype> tabel) {
	if (size != tabel.size) {
		return false;
	} else {
		int i = 0;
		while (i < size && data[i] == tabel.data[i]) {
			i++;
		}
		i = i - 1;
		return data[i] == tabel.data[i];
	}	
}

template<typename atype>
int TabelGenerik<atype>::NumberTabelGenerik() {
	return number_tab;
}
	
#endif
