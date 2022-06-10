#include <iostream>
using namespace std;

int main()
{

    string str = "ndnjbfbd";

    // convert in upper case

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = str[i] - 32;
    }

    cout << str << endl;

    // convert in lower case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str;

    return 0;
}