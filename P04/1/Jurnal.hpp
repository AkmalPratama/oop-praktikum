#ifndef JURNAL_HPP
#define JURNAL_HPP
#define DEFSIZE 256

#include <cstring>
#include "Artikel.hpp"

class Jurnal {
    public:
        Jurnal();
        Jurnal(Artikel*, int);
        Jurnal(const Jurnal&);
        ~Jurnal();
        Jurnal& operator=(const Jurnal&);
        
        Artikel getData(int);
        int getSize();
        void setData(int, Artikel);
        void setSize(int);
        
        int findByTahun(int);
        void add(Artikel);
        void insert(int, Artikel);
        void print();
    private:
        Artikel* data;
        int size;
};

#endif

