//////////////////////////////////////////////     class.cpp

#include <iostream>
#include "class.hpp"

//		private:
//			double _real;
//			double _imag;

//		public:
			//Constructors & Destructor
			Complex::Complex() {
				_real = 0;
				_imag = 0;
			}
			Complex::Complex(double real, double imag) {
				_real = real;
				_imag = imag;
			}
//			Complex::~Complex();

//			Getters
			double real() {
				return real;
			}
			double imag() {
				return imag;
			}

//			Functions
/*			Complex::add(Complex &c1) {
				Complex temp;
				temp._real = c1._real + c2._real;
				temp._imag = c1._imag + c2._imag;

				return temp;
			}
			double Complex::sub(Complex c1, Complex c2) {
				Complex temp;
				temp._real = c1._real - c2._real;
				temp._imag = c1._imag - c2._imag;
				
				return temp;
			}
			Complex mult();
			Complex div();
			Complex magnitude();
			Complex phase();
			void print();

//          Overloading
*/























