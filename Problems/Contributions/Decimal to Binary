// convert the decimal value to binary
#include <iostream>
#include <cmath>
using namespace std;
long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;
  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  return bin;
}

int main() {
  int n, binaryy;
  cout << "Enter a decimal number: ";
  cin >> n;
  binaryy = convert(n);
  cout << n << " in decimal = " << binaryy << " in binary" << endl ;
  return 0;
}

