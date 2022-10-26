#ifndef F2
#define F2
#include <iostream>
#include "furnishing.cpp"

using namespace std;

class  f2: public furnishing{

public:
	 void printfurnish () { cout << "The room has bed and table furnishing.\n" ;	}
};

#endif
