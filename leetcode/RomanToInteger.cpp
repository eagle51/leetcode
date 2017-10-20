#include <iostream>
#include <string>

using namespace std;
int getValue(char c)
{
    switch (c) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}

int RomanToInteger(string s)
{
    int sum = 0;
    for (int i = 0;i < s.length() - 1;++i) {
        if (getValue(s[i]) < getValue(s[i + 1]))
            sum -= getValue(s[i]);
        else
            sum += getValue(s[i]);
    }
    sum += getValue(s[s.length() - 1]);
    return sum;
}
int main()
{

    cout << RomanToInteger("IVI") << endl;
    system("pause");
    return 0;
}