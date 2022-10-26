#ifndef ROOM2
#define ROOM2
#include <iostream>
#include "room.cpp"

using namespace std;

class  room2 : public room{

public:
	 void printdetails () {cout << "One large room of size 15 x 15 and separate kitchen of size 6 x 10." ;	}
};

#endif
