
#include <iostream>
int main()
{
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    for (int i = 1; i <= 12; ++i) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }

    return 0;
}
