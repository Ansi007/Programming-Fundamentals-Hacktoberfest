//Task
//Given a Book class and a Solution class, write a MyBook class that does the following :
//
//Inherits from Book
//Has a parameterized constructor taking these  parameters :
//string
//string
//int
//Implements the Book class' abstract display() method so it prints these  lines:
//, a space, and then the current instance's .
//, a space, and then the current instance's .
//, a space, and then the current instance's .


//Sample Input
//
//The following input from stdin is handled by the locked stub code in your editor :
//
//The Alchemist
//Paulo Coelho
//248




//Sample Output
//
//The following output is printed by your display() method:
//
//Title: The Alchemist
//Author : Paulo Coelho
//Price : 248












#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


class Bookk
{
protected:
    string title;
    string author;
public:
    Bookk()
    {
        title = "";
        author = "";
    }
    Bookk(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0;
};


class MyBook :public Bookk
{
    int price;
public:
    MyBook(string title, string author, int price)
    {
        this->title = title;
        this->author = author;
        this->price = price;
    }
    void display()
    {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Price: " << this->price << endl;
    }
};


int main() {
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
