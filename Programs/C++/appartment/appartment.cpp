#ifndef APPARTMENT
#define APPARTMENT
#include <iostream>


using namespace std;

class  appartment{
	static int appno ;
	room *r1 ;
	furnishing *f ;
	int app ;

public:
	appartment () {
		 appno ++ ;
		r1 = NULL ;
		f = NULL ;
		app = appno ;
		
	}
	
	void assignroom (int x) {
		if (x==1) r1 = new room1 ;
		if (x==2) r1 = new room2 ;
		if (x==3) r1 = new room3 ;
		if (x==4) r1 = new room4 ;
	}
	
	void assignfurnishing (int x) {
		if (x==1) f = new f1 ;
		if (x==2) f = new f2 ;
		if (x==3) f = new f3 ;
	}
	
	void describe () {
		if (r1 == NULL) {
			cout << "Room details are missing.\n" ;
			return ;
		} 
		else r1->printdetails() ;
		if (f== NULL) cout << "Furnishing details are missing.\n" ;
		else f->printfurnish() ;
	}
	
	~appartment () {
		delete r1 ;
		delete f;
	}
	
	static int getappno () {return appno ;}
	
	void changefurnish (int x) {
		delete f;
		assignfurnishing(x) ;
	}
	
	int getnum () {
		return app ;
	}
};

int appartment::appno  = 0 ;
#endif
