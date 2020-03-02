#include <iostream>
#include <cmath>
#include "complexdec.hpp"

//Default Constructor
Complex::Complex() {
	real = 0;
	imag = 0;
}

//_real and real, _imag and imag should be flipped!! Values are assigned from right hand size to left hand side!!!
Complex::Complex(double _real, double _imag) {
	//Constructor with parameters
	_real = real;
	_imag = imag;
}

//_real and real should be flipped!! Values are assigned from right hand size to left hand side!!!
Complex::Complex(double _real) {
	_real = real;
	imag = 0;
}

Complex::~Complex() {}
//Copy Constructor
Complex::Complex(const Complex &_complex) : real(_complex.real), imag(_complex.imag) {
}

//Destructor

//real getter
double Complex::_real() const {
	return real;
}
//imag getter
double Complex::_imag() const {
	return imag;
}

//print function
void Complex::print() {
	std::cout << real;
	if(imag > 0) {
		std::cout << " + " << imag << "i" << std::endl;
	}
	else if(imag < 0) {
		std::cout << " - " << imag << "i" << std::endl;
	}
	else {
		std::cout << " + 0i" << std::endl;
		return;
	}
}

//Conjugate function
Complex Complex::conjugate() {
	Complex c;
	c.real = real;
	c.imag = -imag;
	return c;
}

//Magnitude function using cmath sqrt function
double Complex::magnitude() {
	double magnitude;
	magnitude = sqrt(real*real + imag*imag);
	return magnitude;
}

//phase function using cmath atan function
double Complex::phase() {
	double c;
	c = atan(imag/real);
	return c;
}

//adding function
Complex Complex::add(Complex c) {
	Complex temp;
	temp.real = c.real + real;
	temp.imag = c.imag + imag;
	return temp;
}

//This function is not returning a complex number
//subtraction function
Complex Complex::sub(Complex c) {
	Complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
}

//Multiplication function
Complex Complex::mult(Complex c) {
	Complex temp;
	temp.real = real*c.real - imag*c.imag;
	temp.imag = real*c.imag + imag*c.real;
	return temp;
}

//division function
Complex Complex::div(Complex c) {
	Complex temp;
	temp.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
	temp.imag = (imag*c.real - real*c.imag)/(c.real*c.real + c.imag*c.imag);
	return temp;
}

//Overloading operators + - * / = << >>
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
	temp.real = (real*c.real + imag*c.imag)/(c.real*c.real - c.imag*c.imag);
	temp.imag = (imag*c.real - real*c.imag)/(c.real*c.real - c.imag*c.imag);
	return temp;
}

Complex Complex::operator=(Complex c) {
	Complex temp;
	temp.real = c.real;
	temp.imag = c.imag;
	return temp;
}

//Need to account if imag is negative
std::ostream& operator<<(std::ostream &out, const Complex &c) {
	out << c.real << " +" << c.imag << " i" << std::endl;
	return out;
}

std::istream& operator>>(std::istream &in, Complex &c) {
	in >> c.real >> c.imag;
	return in;
}


