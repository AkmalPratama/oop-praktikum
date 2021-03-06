#include "Box.h"
#include <iostream>

using namespace std;

int Box::countObjects = 0;

Box::Box(int size) {
    this->size = size;
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
    id = countObjects++;

    cout << "ctor " << id << endl;
}

Box::Box(const Box& box) {
    size = box.size;
    data = box.data;
    id = countObjects++;

    cout << "cctor " << id << endl;
}

Box::~Box() {
    cout << "dtor " << id << endl;
}

Box& Box::operator=(const Box& box) {
    size = box.size;
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = box.data[i];
    }

    cout << "assign " << id << " = " << box.id << endl;
}

Box operator+(const Box& b1, const Box& b2) {
    cout << b1.id << " + " << b2.id << endl;
    Box newbox(b1.size);
    for (int i = 0; i < newbox.size; i++) {
        newbox.data[i] = b1.data[i] + b2.data[i];
    }
    return newbox;
}

void Box::show() {
    cout << "show " << id << ": ";
    for (int i = 0; i < size; i++) {
        cout << data[i];
        if (i < size-1) cout << " ";
    }
    cout << "\n";
}

void Box::set(int i, int el) {
    cout << "set " << id << ", idx=" << i << ", val=" << el << endl;
    data[i] = el;
}
