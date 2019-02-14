#ifndef BOX_H
#define BOX_H

class Box {
public:
    // Menghitung objek kelas Box yang sudah dibuat
    static int countObjects;

    // Constructor, copy constructor, destructor, dan operasi assignment
    Box(int size);
    Box(const Box&);
    virtual ~Box();
    Box& operator=(const Box&);

    // Operator+
    // Prekondisi : ukuran b1 sama dengan ukuran b2
    friend Box operator+(const Box& b1, const Box& b2);

    // Memperlihatkan seluruh elemen
    void show();

    // Mengganti nilai data pada indeks ke-i dengan nilai el
    // Prekondisi: nilai i < size
    void set(int i, int el);

private:
    int id;
    int size;
    int* data;
};

#endif
