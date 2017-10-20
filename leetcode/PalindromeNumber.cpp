#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int p = x;
    int result = 0;
    while (p) {
        int t = result * 10 + p % 10;
        if (t / 10 != result)
            return false;
        result = t;
        p /= 10;
    }
    if (result == x)
        return true;
    else
        return false;
}
int main()
{
    cout << isPalindrome(112211);

    system("pause");
    return 0;
}