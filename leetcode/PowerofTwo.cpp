#include <iostream>

using namespace std;
bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    while (n != 1) {
        if ((n & 1) != 0)
            return false;
        n >>= 1;
    }
    return true;
}
int main()
{

    system("pause");
    return 0;
}