#include <iostream>

using namespace std;
bool isBadVersion(int version);
//能通过，1000多毫秒，打败0.57%的人。。。
int firstBadVersion(int n)
{
    while (n) {
        if (isBadVersion(n))
            n--;
        else
            break;
    }
    return n + 1;
}

int firstBadVersion2(int n)
{
    int left = 1;
    int right = n;
    while (left <= right) {
        int mid = (1 + n) >> 1;
        if (!isBadVersion(mid) && isBadVersion(mid + 1))
            return mid+1;
        else if (!isBadVersion(mid) && !isBadVersion(mid + 1))
            left = mid + 1;
        else if (isBadVersion(mid))
            right = mid;
    }
    return -1;
}
int main()
{
    system("pause");
    return 0;
}