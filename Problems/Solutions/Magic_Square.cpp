#include<iostream>
#include<cmath>

using namespace std;

void Magic_Square(int **matrix, int size);
void show(int **x, int size);

int main()
{
	int size;
	do{
		cout << "Enter the size of square in Odd Number" << endl;
		cin >> size;
	}while(size%2==0);
	
	int **x;
	x = new int*[size];
	for(int i=0;i<size;i++)
		x[i]=new int[size];
	Magic_Square(x,size);
	show(x,size);
	return 0;
}

void Magic_Square(int **x, int size){
	int row=0,column=(size/2), k=1;
	for(int l=0;l<size;l++)
		for(int j=0;j<size;j++)
			x[l][j]=0;
	x[0][column]=k;
	for(int i=0;i<size*size-1;i++){
		row=row-1;
		column=column-1;
		if(row<0)
			row=size-1;
		if(column<0)
			column=size-1;
		if(x[row][column]!=0){
				row=row+2; //add 1 for getting the previous row back and 1 for moving down
				column=column+1; //add 1 for getting the previous column back
				
				if(row>size-1){ // for boundary elements
					row=1;
				}
				
				if(column>size-1)
					column=0;	
			}
		x[row][column]=++k;
	}
}

void show(int **x, int size){
	for(int l=0;l<size;l++){
		for(int j=0;j<size;j++)
			cout << x[l][j] << '\t';
		cout << '\n';
	}
}
