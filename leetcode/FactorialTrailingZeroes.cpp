#include <iostream>
//这里需要用long long数存储n和x，否则某次x*5之后有可能溢出，得到不正确的结果
int trailingZeroes(int n) 
{
    int ans = 0;
    long long N = n;
    for (long long x = 5;x <= N;x *= 5)
        ans += (n / x);
    return ans;
}
//leetCode上的最快答案，用迭代除以5的方法,解决了乘以5溢出的问题。
int trailingZeroes(int n)
{
    int ans = 0;
    while (n > 0) {
        ans += n / 5;
        n /= 5;
    }

    return ans;
}
int main()
{
    system("pause");
    return 0;
}