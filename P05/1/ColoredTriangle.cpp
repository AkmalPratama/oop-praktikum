#include <iostream>

#include "ColoredTriangle.hpp"

using namespace std;

// ctor
ColoredTriangle::ColoredTriangle(float s1, float s2, float s3, int r, int g, int b) : Triangle(s1, s2, s3) {
	rgb = new int [3];
	rgb[0] = r;
	rgb[1] = g;
	rgb[2] = b;
}

// cctor
// implementasikan jika diperlukan,
// jika tidak diperlukan, hapus cctor
ColoredTriangle::ColoredTriangle(const ColoredTriangle& coloredTriangle) :
	Triangle(coloredTriangle.getS1(), coloredTriangle.getS2(), coloredTriangle.getS3()) {
	rgb = new int [3];
	rgb[0] = coloredTriangle.rgb[0];
	rgb[1] = coloredTriangle.rgb[1];
	rgb[2] = coloredTriangle.rgb[2];
}

// dtor
// implementasikan jika diperlukan,
// jika tidak diperlukan, hapus dtor
// jika diperlukan,
// selain implementasi, print juga "COLORED TRIANGLE DELETED<endl>"
ColoredTriangle::~ColoredTriangle() {
	delete [] rgb;
	cout << "COLORED TRIANGLE DELETED" << endl;
}

// operator=
// implementasikan jika diperlukan,
// jika tidak diperlukan, hapus operator=
ColoredTriangle& ColoredTriangle::operator=(const ColoredTriangle& triangle) {
	if (this != &triangle) {
		setS1(triangle.getS1());
		setS2(triangle.getS2());
		setS3(triangle.getS3());
		rgb[0] = triangle.rgb[0];
		rgb[1] = triangle.rgb[1];
		rgb[2] = triangle.rgb[2];
	}
	return *this;
}

// getter & setter
int ColoredTriangle::getRed() const {
	return rgb[0];
}
int ColoredTriangle::getGreen() const {
	return rgb[1];
}
int ColoredTriangle::getBlue() const {
	return rgb[2];
}
void ColoredTriangle::setRed(int r) {
	rgb[0] = r;
}
void ColoredTriangle::setGreen(int g) {
	rgb[1] = g;
}
void ColoredTriangle::setBlue(int b) {
	rgb[2] = b;
}

// implementasi print (method untuk menampilkan informasi)
// format: COLOREDTRIANGLE(s1,s2,s3,r,g,b) diahkhiri endline
// contoh: COLOREDTRIANGLE(3,4,5,255,255,255)
void ColoredTriangle::print() {
	cout << "COLOREDTRIANGLE(" << getS1() << "," << getS2() << "," << getS3() << "," << getRed() << "," << getGreen() << "," << getBlue() << ")" << endl;
}
