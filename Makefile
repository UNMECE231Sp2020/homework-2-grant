LIB = -lm
C++_FNS = complexfns.cpp
C++_MAIN = main.cpp 

all:
	g++ $(C++_FNS) $(C++_MAIN) -o class_test

clean:
	rm class_test

