#include <iostream>

class Complex {
	private: 
		double real;
		double imag;
	public:
		//Constructors and Destructor
		Complex();
		Complex(double _real, double _imag);
		Complex(double _real);
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
		Complex add(Complex c);
		Complex sub(Complex c);
		Complex mult(Complex c);
		Complex div(Complex c);
		//Operator overloading
		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);
		Complex operator=(Complex c);

		friend std::ostream& operator<<(std::ostream &out, const Complex &c);
		//missing & in front of c
		friend std::istream& operator>>(std::istream &in, Complex &c);
//missing semicolon
};
	
