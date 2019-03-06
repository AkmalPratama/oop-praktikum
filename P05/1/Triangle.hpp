// Triangle.hpp

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Triangle : public Shape {
  public:

    // ctor
    Triangle(float s1, float s2, float s3);

    // cctor
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus cctor
    Triangle(const Triangle& triangle);

    // dtor
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus dtor
    // jika diperlukan,
    // selain implementasi, print juga "TRIANGLE DELETED<endl>"
    ~Triangle();

    // operator=
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus operator=
    Triangle& operator=(const Triangle& triangle);

    // getter & setter
    float getS1() const;
    float getS2() const;
    float getS3() const;
    void setS1(float s1);
    void setS2(float s2);
    void setS3(float s3);

    // memeriksa apakah ketiga sisi dapat membentuk sebuah segitiga
    // Jika panjang sisi-sisi tersebut adalah a, b, dan c
    // serta a<b<c maka ketiga sisi dapat membentuk segitiga jika a+b>c
    static bool isValid(float s1, float s2, float s3);

    // implementasi area (method untuk menghitung luas)
    // luas segitiga = sqrt(s(s-a)(s-b)(s-c))
    // dengan a,b,c sisi segitiga dan s = 1/2 * keliling
    float area();
    // implementasi perimeter (method untuk menghitung keliling)
    float perimeter();
    // implementasi print (method untuk menampilkan informasi)
    // format: TRIANGLE(s1,s2,s3) diahkhiri endline
    // contoh: TRIANGLE(3,4,5)
    virtual void print();
  protected:
    float *s; // panjang sisi segitiga
};

#endif
