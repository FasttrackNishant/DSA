#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 0; i <= num; i++)
    {
        fact = fact * i;
        }
    return fact;
}
int answer(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(r - 1);
    return num / denom;
}
int main()
{
    int a, r;
    // cin >> a;
    // cin >> r;
    // cout << " The answer is " << answer(a, r);
    cout << factorial(4);
    return 0;
}