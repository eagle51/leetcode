#include <iostream>

using namespace std;
int reverse(int x)
{
    int result = 0;
    
    while (x) {
        int t= result * 10 + x % 10;
        if (t / 10 != result)
            return 0;
        result = t;
        x /= 10;
    }
    return result;
}

int main()
{
    cout << reverse(321) << endl;

    system("pause");
    return 0;
}