LIB = -lm
C++_FNS = class.cpp
C++_MAIN = main.cpp $(C++_FNS)

all:
	g++ $(C++_MAIN) $(C++_FNS) -o class_test

clean:
	rm class_test

