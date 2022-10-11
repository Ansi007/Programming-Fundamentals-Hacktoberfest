//
// Created by alam on 10/10/22.
//
//Find the third angle of a triangle!

#include <iostream>

using namespace std;


int main() {

    cout << "Third Angle Calculator!\n";
    int a, b, c;

    cout << "Enter the first angle of the triangle: ";
    cin >> a;

    cout << "Enter the second angle of the triangle: ";
    cin >> b;

    c = 180 - (a + b);

    cout << "The third angle is: " << c;


    return 0;
}