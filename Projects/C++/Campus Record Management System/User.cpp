#ifndef USER
#define USER

#include <iostream>
using namespace std;

int strLen(string s)
{
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

class User{
    int id;
    public:
    void setID(int id);
    int getID() const;
    friend ostream& operator << (ostream &out, const User a)
	{
        out << a.id << '\n';
        return out;
    }
    friend istream& operator >> (istream &in, User &a)
	{
        int id;
        cout << "Enter id: ";
        in >> id;
        a.setID(id);
        return in;
    }
};

void User::setID(int id)
{
    this->id = id;
}
int User::getID()const
{
    return this->id;
}

#endif