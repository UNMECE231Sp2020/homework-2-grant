////////////////////////			class.hpp
#include <iostream>

class Complex {
	private:
		double _real;
		double _imag;

	public:
		//Default Constructor
		Complex();
		//Parameterized Constructor
		Complex(double real, double imag);
		//Destructor
		~Complex();

//		Maybe do Setters

//		Getters
		double real() const;
		double imag() const;

//		Functions
		double add();
		double sub();
		double mult();
		double div();
		double magnitude();
		double phase();
		void print();

//		ToDo Op Overloading
};
