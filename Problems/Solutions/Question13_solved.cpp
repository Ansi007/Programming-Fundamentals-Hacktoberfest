//
// Created by alam on 10/10/22.
//
//Find the perimeter of a rectangle with given length and breadth

#include <iostream>
using namespace std;

int main(){

    cout << "Rectangle Perimeter Calculator!\n";
    int len, bread;

    cout << "\nEnter the length of the rectangle: ";
    cin >> len;

    while(len <= 0){
        cout << "\nEnter the length of the rectangle(natural numbers): ";
        cin >> len;
    }

    cout << "\nEnter the breadth of the rectangle: ";
    cin >> bread;

    while(bread <= 0){
        cout << "\nEnter the breadth of the rectangle(natural numbers): ";
        cin >> bread;
    }

    cout << "\nThe perimeter of the rectangle with length " << len << " and breadth " << bread << " is: " << 2 * (len + bread);

    return 0;
}