#ifndef F3
#define F3
#include <iostream>
#include "furnishing.cpp"

using namespace std;

class  f3: public furnishing{

public:
	 void printfurnish () { cout << "The room has bed, sofa and table furnishing.\n" ;	}
};

#endif
