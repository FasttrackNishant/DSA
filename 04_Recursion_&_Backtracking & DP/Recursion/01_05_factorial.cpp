#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    cout << n << "is calculated " << endl;

    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(15);
    return 0;
}