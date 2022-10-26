#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

template <class T1>

class mylist {
	T1 *x;
	int currentsize , size;
	void resize(int newSize){
		size = newSize;
		T1 *temp = new T1[size];		
		for (int i=0;i<currentsize;i++)
			temp[i] = x[i];
		delete []x;	
		x = temp;	
	}
	
	void setsize (int size) {
		if (size <= 0 ) size = 10;
		this->size = size;
	}
	
	void initialize () {
		x = new T1 [size];
		currentsize = 0;
	}
	
	bool checkunique (T1 element){
		for (int i = 0 ; i < currentsize ; i++) 
			if (x[i] == element) return true ;
		return false;
	}
	void copy (const mylist &l) {
		size = l.size ;
		initialize() ;
		currentsize = l.currentsize;
		int i;
		for (i = 0 ; i < currentsize ; i++) 
				x[i] = l.x[i] ;
	}
public:
	mylist (const mylist &l) {
		copy (l) ;
	}
	
	void operator = (const mylist &l) {
		delete [] x;
		copy(l) ;
	}
	mylist(int size){
		setsize(size) ;
		initialize() ;
	}
	
	mylist () {
		size = 10 ;
		initialize() ;	
	}
	
	mylist(T1 *a, int size){
		setsize(size) ;
		initialize() ;
		int i;
		for (i = 0 ; i < size ; i++) 
			x[i] = a[i] ;
		currentsize = size ;
	}
	
	void addelement (T1 element) {
		if (currentsize == size) resize (size * 2) ;
		if (!checkunique(element)) x[currentsize++] = element ;
	}
	
	void printelements () {
		int i;
		for (i = 0 ; i < currentsize ; i++) 	
			cout << x[i] << ' ' ;
		cout << '\n' ;
	}
	
	~mylist () {
		delete [] x ;
	}
	
	friend ostream& operator << (ostream &out,  mylist &l) {
		int i ;
		for (i = 0 ; i < l.currentsize ; i++) 		
			out << l.x[i]  ;
		return out ;
	}
	
};

int main() {
	srand(time(0)) ;
	int arr[5] = {20 , 56 , 12 , 89 , 65} ;;
	char c[5] = {'E' , 'I' , 'S' , 'H' , 'A'} ;
	mylist <int> l1(arr , 5) ;
	l1.printelements();
	int i;
	mylist <int> l2(3) ;
	for (i = 0 ; i < 6 ; i ++)
		l2.addelement(rand () % 100) ;
	l2.printelements();
	mylist <int> list = l2;
	list.printelements();
	l2 = l1 ;
	l2.printelements();
	cout << "--------------------\n" ;
	mylist <char> l(c , 5) ;
	l.printelements();
	mylist <char> l3(3) ;
	for (i = 0 ; i < 6 ; i ++)
		l3.addelement(rand () % 26 + 'A') ;
	l3.printelements();
	mylist <char> list1 = l3;
	list1.printelements();
	l3 = l ;
	l3.printelements();
}
