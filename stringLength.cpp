#include <iostream>
using namespace std;

int getStringLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[20];
    cout << "enter string: ";
    cin >> ch;

    // cout << "your string: " << ch << endl;

    int len = getStringLength(ch);
    cout << "lenght of string is: " << len << endl;
    return 0;
}
