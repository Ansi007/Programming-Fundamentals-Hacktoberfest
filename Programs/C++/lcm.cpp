#include <iostream>
using namespace std;
int main() {
    int x;
    int l;
    int y;
    cout << "input numbers : ";
    cin >> x;
    cin >> y;
    if (x > y)
        l = x;
    else
        l = y;
    while (1) {
        if (l % x == 0 && l % y == 0) {
            cout << " LCM  is " <<l;
            break;
        }
        l++;
    }
    return 0;
}