#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValid(string s)
{
    stack<char> cstack;
    for (int i = 0;i < s.length();++i) {
        char c = s[i];
        if (c != ')' && c != ']'&& c != '}')
            cstack.push(c);
        else {
            if (cstack.size() == 0)
                return false;
            char pre = cstack.top();
            switch (c) {
            case ')':
                if (pre == '(')
                    cstack.pop();
                else
                    return false;
                break;
            case ']':
                if (pre == '[')
                    cstack.pop();
                else
                    return false;
                break;
            case '}':
                if (pre == '{')
                    cstack.pop();
                else
                    return false;
                break;
            }
        }
    }
    if (cstack.size() != 0)
        return false;
    else
        return true;
}
int main()
{
    string str1{"{[()[]]}"};
    string str2{"{(})"};
    cout << boolalpha << isValid(str1) << noboolalpha << endl;
    cout << boolalpha << isValid(str2) << noboolalpha << endl;
    system("pause");
    return 0;
}