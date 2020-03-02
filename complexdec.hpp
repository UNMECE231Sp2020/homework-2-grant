#include <iostream>

class Complex {
	private: 
		double real;
		double imag;
	public:
		//Constructors and Destructor
		Complex();
		Complex(double real, double imag);
		Complex(const Complex &_complex);
		//Getters
		double _real() const;
		double _imag() const;
		//Print function
		void print();
		//Functions
		Complex conjugate();
		double magnitude();
		double phase();
		void add(Complex c);
		void sub(Complex c);
		void mult(Complex c);
		void div(Complex c);
		//Operator overloading
		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);
		void operator=(Complex c);

		friend std::ostream& operator<<(std::ostream &out, const Complex &c);
		friend std::istream& operator>>(std::istream &in, Complex c);

}
	
