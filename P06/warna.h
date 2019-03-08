/**
    Kelas Generik Warna, memiliki tiga atribut R,G dan B.
*/
#include <math.h>
template <class T>
class Warna {
public:
    // Ctor tanpa parameter
	Warna<T>() {
	}
    // Ctor berparameter, parameter berturut-turut R,G,B
    Warna<T>(T R, T G, T B) {
    	r = 0;
    	g = 0;
    	b = 0;
	}
    // cctor
    Warna<T>(const Warna<T>& w) {
    	r = w.r;
    	g = w.g;
    	b = w.b;
	}
    // Operator=
    Warna<T>& operator=(const Warna<T>& w) {
    	if (this != &w) {
    		r = w.r;
	    	g = w.g;
	    	b = w.b;
		}
		return *this;
	}

    // Getter dan setter
    T getRed() const {
		return r;
	}
    T getGreen() const {
		return g;
	}
    T getBlue() const {
		return b;
	}
    
    void setRed(T R) {
		r = R;
	}
    void setGreen(T G) {
		g = G;
	}
    void setBlue(T B) {
		b = B;
	}

    //menghasilkan perbedaan absolut antara nilai R, G, dan B [difference = abs(r1-r2) + abs(g1-g2) + abs(b1-b2)]
    T countDifference(Warna<T> w) {
    	return abs(r-w.r) + abs(g-w.g) + abs(b-w.b);
	}

    // Operator overloading, mengubah nilai warna
    Warna<T> operator +(const Warna<T>& w) const {
		return Warna<T>(r+w.r, g+w.g, b+w.b);
	} //rnew=r1+r2, gnew=g1+g2, bnew = b1+b2
    Warna<T> operator -(const Warna<T>& w) const {
		return Warna<T>(r-w.r, g-w.g, b-w.b);
	} //rnew=r1-r2, gnew=g1-g2, bnew = b1-b2
private:
	T r;
	T g;
	T b;
};
