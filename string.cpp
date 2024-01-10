#include <iostream>
using namespace std;

int main()
{
    string str = "stringincpp";
    cout << "length: " << str.length() << " " << endl;
    str = str + "ok";
    cout << str << " " << endl;
    cout << str.substr(1, 3) << endl;
    cout << str.find("in") << " ";
    return 0;
}
