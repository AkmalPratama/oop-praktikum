#include <string>
#include <iostream>

using namespace std;

class Unggas {
	public:
	    Unggas(string nama) {
	    	this->nama = nama;
	    	cout << "Unggas bernama " << nama << " menetas! :D" << endl;
		}
		Unggas(const Unggas &u) {
			nama = u.nama;
			cout << "Unggas bernama " << nama << " menetas! :D" << endl;
		}
		Unggas& operator=(Unggas &u) {
			nama = u.nama;
		}
		virtual ~Unggas() {
			cout << "Unggas bernama " << nama << " mati T.T" << endl;
		}
		virtual void bersuara()=0;
	protected:
		string nama;
};

class Ayam : public Unggas {
	public:
		Ayam(string nama) : Unggas(nama) {
			cout << "Ayam bernama " << nama << " menetas! :D" << endl;
		}
		virtual ~Ayam() {
			cout << "Ayam bernama " << nama << " mati T.T" << endl;
		}
		void bersuara() {
			cout << nama << ": \"Tok petok petok!\"" << endl;
		}
};

class Bebek : public Unggas {
	public:
		Bebek(string nama) : Unggas(nama) {
			cout << "Bebek bernama " << nama << " menetas! :D" << endl;
		}
		virtual ~Bebek() {
			cout << "Bebek bernama " << nama << " mati T.T" << endl;
		}
		void bersuara() {
			cout << nama << ": \"Kwek kwek!\"" << endl;
		}
};

class AyamJago : public Ayam {
	public:
		AyamJago(string nama) : Ayam(nama) {
			cout << "AyamJago bernama " << nama << " menetas! :D" << endl;
		}
		virtual ~AyamJago() {
			cout << "AyamJago bernama " << nama << " mati T.T" << endl;
		}
		void bersuara() {
			cout << nama << ": \"Kukuruyuk!!\"" << endl;
		}
};

int main() {
  Unggas* kumpulan_unggas[3];
  
  Ayam ayam("Parjo");
  Bebek bebek("Donal");
  AyamJago ayamJago("Joni");
  
  kumpulan_unggas[0] = &ayam;
  kumpulan_unggas[1] = &bebek;
  kumpulan_unggas[2] = &ayamJago;
  
  cout << "error" << endl;
//  Unggas unggasBaru("Tweety");

  Ayam* ayamBaru = new Ayam(ayamJago);
  ayamBaru->bersuara();
  
  cout << "error" << endl;
  cout << "error" << endl;
//   AyamJago* ayamJagoBaru = new AyamJago(bebek);
//   ayamJagoBaru->bersuara();

  delete ayamBaru;

  for (int i = 2; i >= 0; --i) {
    kumpulan_unggas[i]->bersuara();
  }

  return 0;
}

