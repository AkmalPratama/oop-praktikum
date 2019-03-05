#include "User.h"

using namespace std;

int User::n_user = 0;
// ctor, parameter: nama pengguna
User::User(char* c) {
	name = new char [256];
	strcpy(name, c);
	n_user++;
}

// cctor
User::User(const User& u) {
	name = new char [256];
	strcpy(name, u.name);
	n_user++;
}

// dtor
// selain implementasi, print juga "User <nama user> deleted<endl>"
// Contoh:
// User A deleted
//
User::~User() {
	cout << "User " << name << " deleted" << endl;
	n_user--;
	delete [] name;
	delete [] music_list;
}

// Asumsi: musik unik, parameter: judul musik
void User::addFavouriteMusic(char* m) {
	
}
void User::deleteFavouriteMusic(char*);

void User::setName(char* n) {
	strcpy(name, n);
}
char* User::getName() const {
	return name;
}
int User::getNumOfFavouriteMusic() const {
	return num_of_favourite_music;
}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music in your favourite list<endl>"
void User::viewMusicList() const;

int User::getNumOfUser() {
	return n_user;
}

/**
 * Hari ini adalah hari Valentine. Banyak muda mudi pergi bersama untuk menikmati kebersamaan. Namun berbeda dengan Dilon. Dengan perginya Milia sejak 1990, ia merasa sendiri di Hari Valentine ini. Akhirnya Dilon memutuskan untuk masuk ke kamarnya dan mendengarkan Spottypie.

Ilustrasi logo Spottypie

Spottypie adalah aplikasi yang dapat digunakan untuk memainkan musik secara online. Pengguna aplikasi Spottypie terdiri dari tiga jenis, yaitu pengguna biasa, pengguna premium, dan artis/musisi. Pengguna biasa hanya dapat mendengarkan musik dan menyimpannya dalam daftar musik favorit. Pengguna premium dapat mengunduh musik sehingga dapat dijalankan secara offline. Pengguna artis dapat mengunggah musik.

Karena Dilon sangat tertarik dengan Spottypie, Dilon ingin membuat aplikasi tandingan dari Spottypie. Sebagai mahasiswa yang mengambil mata kuliah IF2210 Pemrograman berorientasi objek, Dilon meminta anda untuk membuat tandingan dari Spottypie.
 
Anda diminta oleh Dilon untuk membuat "aplikasi" kecil sejenis Spottypie. Yang perlu anda buat adalah implementasi kelas dalam .cpp saja. Header dari masing-masing kelas dapat diunduh melalui tautan berikut ini.
- User.h
- PremiumUser.h
- ArtistUser.h

Catatan:
Gunakan library <cstring> untuk menggunakan fungsi-fungsi pengolah string:

    strcmp(str1, str2) untuk membandingkan str1 dan str2, jika hasil 0 berarti kedua string sama.
    strcpy(str1, str2) untuk menyalin str2 ke str1
    strlen(str) untuk memeriksa panjang sebuah string


Upload sebuah zip berisi file-file User.cpp, PremiumUser.cpp, dan ArtistUser.cpp.
 * 
 * /
