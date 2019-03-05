#ifndef ARTIKEL_HPP
#define ARTIKEL_HPP

#define DEFSIZE 256

#include <cstring>

class Artikel {
    public:
        Artikel();
        Artikel(char*, char*, int);
        Artikel(const Artikel&);
        ~Artikel();
        Artikel& operator=(const Artikel&);
        
        char* getJudul();
        char* getPenulis();
        int getTahun();
        
        void setJudul(char*);
        void setPenulis(char*);
        void setTahun(int);
        
        void print();
    private:
        char* judul;
        char* penulis;
        int tahun;
};

#endif
