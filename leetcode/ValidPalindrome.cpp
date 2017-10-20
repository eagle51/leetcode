#include <iostream>
#include <string>

using namespace std;
bool isalum(const char c)
{
    if ((c >= 'A'&&c <= 'Z') || (c >= '0' && c <= '9'))
        return true;
    return false;
}
bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j) {
        while (!isalum(toupper(s[i]))) {
            i++;
        }
        while (!isalum(toupper(s[j]))) {
            j--;
        }
        if (i >= j)
            break;
        if (toupper(s[j--]) != toupper(s[i++])) {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "0P";
    cout << isPalindrome(s);
    system("pause");
    return 0;
}