#include <iostream>
//������Ҫ��long long���洢n��x������ĳ��x*5֮���п���������õ�����ȷ�Ľ��
int trailingZeroes(int n) 
{
    int ans = 0;
    long long N = n;
    for (long long x = 5;x <= N;x *= 5)
        ans += (n / x);
    return ans;
}
//leetCode�ϵ����𰸣��õ�������5�ķ���,����˳���5��������⡣
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