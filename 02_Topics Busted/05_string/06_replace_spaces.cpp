/*https://www.codingninjas.com/codestudio/problem-details/replace-spaces_1172172*/

#include <iostream>
using namespace std;

string replacespace(string &str)
{
    string temp = "";

    for (int i = 0; i < str .length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i])
        }
    }
    return temp;
}

int main()
{
    int a;
    cout << endl;
    return 0;
}