#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value till to count " << endl;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << " ";
    }
    return 0;
}