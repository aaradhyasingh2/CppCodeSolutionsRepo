#include <iostream>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while (s[i] !=' ' && i<s.length())
        {
            /* code */
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        /* code */
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s= "hello, girl how are you?"; 
    // string s = "you? are how girl hello,";
    reverseSentence(s);

    return 0;
}
