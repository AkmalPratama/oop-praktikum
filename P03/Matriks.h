#ifndef MATRIKS_H
#define MATRIKS_H
#define DEFSIZE 100

class Matriks
{
public:
  // ctor inisialisasi n_brs dan n_kol dengan ctor initialization list, N=M=defsize
  // Seluruh elemen matriks diinisialisasi dengan nilai 0
  Matriks();

  // ctor dengan param n (banyaknya baris) dan m (banyaknya kolom)
  // Seluruh elemen matriks diinisialisasi dengan nilai 0
  Matriks(int n, int m);

  // cctor
  Matriks(const Matriks &m);

  // dtor
  ~Matriks();

  // operator= menjamin tidak bitwise copy.
  // dan dapat melakukan assignment m1=m2; prekondisi: ukuran m1=ukuran m2
  Matriks& operator=(Matriks &m);

  // test apakah ukuran sama: true jika m1.num_brs== m2.num_brs && m1.num_kol== m2.num_kol
  friend bool IsEqSize(Matriks m1, Matriks m2);

  // operator+ penjumlahan nilai b dari kedua matriks yg posisinya sama
  // Mhasil(i,j) = M1 (i,j) + M2(i,j)
  // Proses : jika ukuran m2 tak sama dengan current object,
  // yang tak beririsan tidak dijumlahkan, hanya dicopy
  // hasilnya adalah matriks yang lebih besar
  // ditulis sebagai function member
  Matriks operator+(Matriks m2);

  // operator- pengurangan nilai b dari kedua matriks yg posisinya sama
  // Mhasil(i,j) = M1 (i,j) - M2(i,j)
  // Proses : jika ukuran m2 tak sama dengan current object,
  // yang tak beririsan tidak dijumlahkan, hanya dicopy
  // hasilnya adalah matriks yang lebih besar
  // ditulis sebagai friend function
  friend Matriks operator-(const Matriks &m1, const Matriks &m2);

  // operator* perkalian dengan sebuah bilangan konstanta
  // ditulis sebagai function member
  Matriks operator*(const int n);

  // operator* perkalian dengan sebuah bilangan konstanta
  // diimplementasikan untuk memenuhi sifat komutatif
  // ditulis sebagai frined function
  friend Matriks operator*(const int n, const Matriks m2); 
  
  // isikan nilai v di posisi data[i,j], i dan j terdefinisi
  void SetData(int i, int j, int v);

  // ambil elemen v di posisi data[i,j], i dan j terdefinisi
  int GetData(int i, int j) const;

  // Mengembalikan num_brs
  int GetBrs() const;
  // Mengembalikan num_kol
  int GetKol() const;
  // Mengecek apakah num_brs sama dengan num_kol
  bool IsSimetri() const;

protected:
  const int num_brs; // Banyaknya baris, num_brs > 0
  const int num_kol; // Banyaknya kolom, num_kol > 0
  int **b;           // Elemen matriks
};

#endif
