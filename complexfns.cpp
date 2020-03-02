#include <iostream>
#include <cmath>
#include "complexdec.hpp"

Complex::Complex() {
	//Default Constructor
	real = 0;
	imag = 0;
}

Complex::Complex(double _real, double _imag) {
	//Constructor with parameters
	_real = real;
	_imag = imag;
}

Complex::Complex(const Complex &_complex) : real(_complex.real), imag(_complex.imag) {
}

double Complex::_real() const {
	return real;
}

double Complex::_imag() const {
	return imag;
}

void Complex::print() {
	std::cout << real << " + ";
	std::cout << imag << "i" << std::endl;
}

Complex Complex::conjugate() {
	Complex c;
	c.real = real;
	c.imag = -imag;
	return c;
}

double Complex::magnitude() {
	double magnitude;
	magnitude = sqrt(real*real + imag*imag);
	return magnitude;
}

double Complex::phase() {
}

void Complex::add(Complex c) {
	real += c.real;
	imag += c.imag;
}

void Complex::sub(Complex c) {
	real -= c.real;
	imag -=c.imag;
}

void Complex::mult(Complex c) {
	real = real*c.real - imag*c.imag;
	imag = real*c.imag + imag*c.real;
}

void Complex::div(Complex c) {
	real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
	imag = (imag*c.real - real*c.imag)/(c.real*c.real + c.imag*c.imag);
}

Complex Complex::operator+(Complex c) {
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}

Complex Complex::operator-(Complex c) {
	Complex temp;
	temp.real = real - c.real;
	temp.imag = real - c.imag;
	return temp;
}
Complex Complex::operator*(Complex c){
	Complex temp;
	temp.real = real*c.real - imag*c.imag;
	temp.imag = real*c.imag + imag*c.real;
	return temp;
}

Complex Complex::operator/(Complex c) {
	Complex temp;
	temp.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
	temp.imag = (imag*c.real - real*c.imag)/(c.real*c.real + c.imag*c.imag);
	return temp;
}

void Complex::operator=(Complex c) {
	real = c.real;
	imag = c.imag;
}

std::ostream& operator<<(std::ostream &out, const Complex &c) {
	out << c.real << " " << c.imag << " " << std::endl;
	return out;
}

std::istream operator>>(std::istream &in, Complex &c) {
	in >> c.real >> c.imag;
	return in;
}


