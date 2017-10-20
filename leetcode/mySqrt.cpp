#include <iostream>

using namespace std;
int mySqrt(int x) 
{
    long long left = 0, right = (x / 2) + 1;
    while (left <= right) {
        long long mid = (right + left) >> 1;
        long long s = mid*mid;
        if (s < x)
            left = mid + 1;
        else if (s > x)
            right = mid - 1;
        else
            return mid;
    }
    return right;
}

int main()
{
    cout << mySqrt(2) << endl;

    system("pause");
    return 0;
}