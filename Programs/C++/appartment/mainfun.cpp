#include <iostream>
#include <cstdlib>
#include <ctime>
#include "room.cpp"
#include "room2.cpp"
#include "room1.cpp"
#include "room3.cpp"
#include "room4.cpp"
#include "furnishing.cpp"
#include "f1.cpp"
#include "f2.cpp"
#include "f3.cpp"
#include "appartment.cpp"

using namespace std;

int main () {
	srand(time(0));
	appartment a[4];
	int i;
	for (i = 0 ; i < 4 ; i++) {
	a[i].assignroom(rand () % 4 + 1) ;
	a[i].assignfurnishing(rand () % 3 + 1) ;
	cout << "Appartment no " << a[i].getnum() << ' ' ;
	a[i].describe() ;
	}
	
	
	appartment a1;
	a1.assignroom(rand () % 4 + 1) ;
	cout << "Appartment no " << appartment :: getappno() << ' ' ;
	a1.describe() ;
	
	appartment a2 ;
	a2.assignfurnishing(rand () % 3 + 1) ;
	cout << "Appartment no " << appartment :: getappno() << ' ' ;
	a2.describe() ;
	
	appartment a3 ;
	a3.assignroom(rand () % 4 + 1) ;
	a3.assignfurnishing(rand () % 3 + 1) ;
	cout << "Appartment no " << appartment :: getappno() << ' ' ;
	a3.describe() ;
	a3.changefurnish(rand () % 3 + 1);
	cout << "Appartment no " << appartment :: getappno() << ' ' ;
	a3.describe();
}


