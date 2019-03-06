#include <iostream>

#include "Circle.hpp"

using namespace std;

//ctor
Circle::Circle(float radius) {
	this->radius = radius;
}

// cctor
// implementasikan jika diperlukan,
// jika tidak diperlukan, hapus cctor
Circle::Circle(const Circle& circle) {
	radius = circle.radius;
}

// dtor
// implementasikan jika diperlukan,
// jika tidak diperlukan, hapus dtor
// jika diperlukan
// selain implementasi, print juga "CIRCLE DELETED<endl>"
// Circle::~Circle() {
// 	cout << "CIRCLE DELETED" << endl;
// }

// operator=
// implementasikan jika diperlukan,
// jika tidak diperlukan, hapus operator=
Circle& Circle::operator=(const Circle& circle) {
	if (this != &circle) {
		radius = circle.radius;
	}
	return *this;
}

// getter & setter
float Circle::getRadius() const {
	return radius;
}
void Circle::setRadius(float radius) {
	this->radius = radius;
}

// implementasi area (method untuk menghitung luas)
// untuk nilai phi gunakan nilai 3.14
float Circle::area() {
	return 3.14*radius*radius;
}
// implementasi perimeter (method untuk menghitung keliling)
// untuk nilai phi gunakan nilai 3.14
float Circle::perimeter() {
	return 2*3.14*radius;
}
// implementasi print (method untuk menampilkan informasi)
//format: CIRCLE(radius) diahkhiri endline
//contoh: CIRCLE(7)
void Circle::print() {
	cout << "CIRCLE(" << radius << ")" << endl;
}
