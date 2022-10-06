#include <iostream>
using namespace std;

const int L = 4;
int ** lab;
int labSize;
int *station;

void setdata()
{
    lab = new int*[L];
    for (int i = 0; i < L; i++)
    {
        int a;
        cout << "input the quantity of computers " << i + 1 << " ";
        cin >> a;
        lab[i][a] = a;
    }
}
int getmenu()
{
    int res;
    const int Menu = 3;
    cout << "if you want to exit the program then enter 0" << endl;
    cout << "if you want to enter data then enter 1" << endl;
    cout << "if you want to search data then enter 2" << endl;
    cout << "if you want to print then enter 3" << endl;
    cin >> res;
    if (res > 0 && res < Menu)
    {
        while (res > 0 && res < Menu); {
            cout << "if you want to exit the program then enter 0" << endl;
            cout << "if you want to enter data then enter 1" << endl;
            cout << "if you want to search data then enter 2" << endl;
            cout << "if you want to print then enter 3" << endl;
            cin >> res;
        }
    }
    else
    {
        cout << "enter in the range from 0 to 3" << endl;
    }
    return res;
}
void storedata(int id, int st, int Lab)
{
    lab[Lab][st] = id;


}
void searchdata(int id)
{
    int lab, station;

}
void printdata()
{
}
bool choice(int input)
{
    switch(input)
    {
        case 0:
            return false;
        case 1:
            int id, station, lab;
            cout << "If the entered ID is 0 that means user is logged off." << endl;
            cout << "Enter the users ID: ";
            cin >> id;
            cout << "Enter the station number: ";
            cin >> station;
            cout << "Enter the lab number: ";
            cin >> lab;
            storedata(id, station, lab);
            break;
        case 2:
            
            cout << "Enter the user ID to search for: ";
            cin >> id;
            searchdata(id);
            break;
        case 3:
            printdata();
            break;
    }
    return true;
}


int main()
{
    setdata();
}
