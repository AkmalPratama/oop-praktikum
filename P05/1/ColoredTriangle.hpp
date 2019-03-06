// ColoredTriangle.hpp

#ifndef COLORED_TRIANGLE_HPP
#define COLORED_TRIANGLE_HPP

#include "Triangle.hpp"

class ColoredTriangle : public Triangle {
  public:
    // ctor
    ColoredTriangle(float s1, float s2, float s3, int r, int g, int b);

    // cctor
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus cctor
    ColoredTriangle(const ColoredTriangle& coloredTriangle);

    // dtor
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus dtor
    // jika diperlukan,
    // selain implementasi, print juga "COLORED TRIANGLE DELETED<endl>"
    ~ColoredTriangle();

    // operator=
    // implementasikan jika diperlukan,
    // jika tidak diperlukan, hapus operator=
    ColoredTriangle& operator=(const ColoredTriangle& triangle);

    // getter & setter
    int getRed() const;
    int getGreen() const;
    int getBlue() const;
    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);

    // implementasi print (method untuk menampilkan informasi)
    // format: COLOREDTRIANGLE(s1,s2,s3,r,g,b) diahkhiri endline
    // contoh: COLOREDTRIANGLE(3,4,5,255,255,255)
    void print();

  private:
    int* rgb; //rgb[0] = r, rgb[1] = g, rgb[2] = b
};

#endif
