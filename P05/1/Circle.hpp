// Circle.hpp

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
  public:
    //ctor
    Circle(float radius);

    // cctor
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus cctor
    Circle(const Circle& circle);

    // dtor
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus dtor
    // jika diperlukan
    // selain implementasi, print juga "CIRCLE DELETED<endl>"
    // ~Circle();

    // operator=
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus operator=
    Circle& operator=(const Circle& circle);

    // getter & setter
    float getRadius() const;
    void setRadius(float radius);

    // implementasi area (method untuk menghitung luas)
    // untuk nilai phi gunakan nilai 3.14
    float area();
    // implementasi perimeter (method untuk menghitung keliling)
    // untuk nilai phi gunakan nilai 3.14
    float perimeter();
    // implementasi print (method untuk menampilkan informasi)
    //format: CIRCLE(radius) diahkhiri endline
    //contoh: CIRCLE(7)
    void print();

  private:
    float radius;
};

#endif
