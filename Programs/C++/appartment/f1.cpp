#ifndef F1
#define F1
#include <iostream>
#include "furnishing.cpp"

using namespace std;

class  f1: public furnishing{

public:
	 void printfurnish () { cout << "The room has no furnishing.\n" ;	}
};

#endif
