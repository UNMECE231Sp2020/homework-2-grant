#include <iostream>

class Complex {
	private: 
		double real;
		double imag;
	public:
		Complex();
		Complex(double real, double imag);
		Complex(const Complex &_complex);
		
		double _real() const;
		double _imag() const;
		void print();
		
		Complex conjugate();
		double magnitude();
		double phase();
		void add(Complex c);
		void sub(Complex c);
		void mult(Complex c);
		void div(Complex c);

		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);
		void operator=(Complex c);

		friend std::ostream& operator<<(std::ostream &out, const Complex &c);
		friend std::istream& operator>>(std::istream &in, Complex c);

}
	
