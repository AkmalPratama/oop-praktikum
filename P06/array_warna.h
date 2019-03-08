#include "warna.h"

/**
    Kelas ArrayWarna, menyimpan dua buah array, array pertama berisi objek T dan array kedua berisi objek Warna 
    Ukuran maksimum pada array ditandai dengan atribut size dan jumlah elemen pada array ditandai dengan atribut neff
*/

template <class T>
class ArrayWarna {
public:
    // cctor tanpa parameter dengan ukuran maksimum 10
	ArrayWarna<T>() {
    	neff = 0;
    	size = 10;
		warna = new Warna<T> [size];
    	data = new T [size];
	}
    // Membuat sebuah ArrayWarna dengan ukuran maksimum n
    ArrayWarna<T>(int n) {
    	neff = 0;
    	size = n;
    	warna = new Warna<T> [size];
    	data = new T [size];
	}
    // cctor
    ArrayWarna<T>(const ArrayWarna<T>& aw) {
    	neff = aw.neff;
    	size = aw.size;
    	warna = new Warna<T> [aw.size];
    	data = new T [aw.size];
    	for (int i = 0; i < neff; i++) {
    		data[i] = aw.data[i];
    		warna[i] = aw.warna[i];
		}
	}
    // Operator=
    ArrayWarna<T>& operator=(const ArrayWarna<T>& aw) {
    	if (this != &aw) {
    		delete [] warna;
    		delete [] data;
    		neff = aw.neff;
	    	size = aw.size;
	    	warna = new Warna<T> [aw.size];
	    	data = new T [aw.size];
	    	for (int i = 0; i < neff; i++) {
	    		data[i] = aw.data[i];
	    		warna[i] = aw.warna[i];
			}
		}
		return *this;
	}

    // true jika array penuh
    bool isFull() {
    	return neff == size;
	}
    // true jika array kosong
    bool isEmpty() {
    	return neff == 0;
	}

    // Getter
    int getSize() const {
		return size;
	}
    int getNeff() const {
		return neff;
	}
    
    // Menambahkan elemen warna dan data di akhir array
    void addElement(T d, Warna<T> w) {
    	warna[neff] = w;
    	data[neff] = d;
    	neff++;
	}
    // Mengubah warna dan data pada index ke n
    void setElement(T d, Warna<T> w, int n) {
    	warna[n] = w;
    	data[n] = d;
	}

    // Mengembalikan data pada index ke n; n TIDAK mungkin di luar index
    T getData(int n) {
    	return data[n];
	}
    
    // Mengembalikan warna pada index ke n; n TIDAK mungkin di luar index
    Warna<T> getWarna(int n) {
    	return warna[n];
	}
private:
	T *data;
	Warna<T> *warna;
	int size;
	int neff;
};
