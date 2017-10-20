#include <iostream>
#include <vector>

using namespace std;
//leetcode �����������㷨���ռ临�Ӷ�ΪO(n)
int climbStairs(int n) {
    vector<int> dp(n + 1, 0);
    dp[1] = 1; dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];

}

//�ҵ��㷨�ռ临�Ӷ�Ϊ����,��Ȼʱ�临�Ӷ�Ҳ��O(n)��������������ʱ��������Ķ����������ÿռ任��ʱ��
int climbStairs(int n)
{
    int f = 0,g = 1;
    while (n--) {
        g = f + g;
        f = g - f;
    }
    return g;
}

int main()
{
    cout << climbStairs(5) << endl;

    system("pause");
    return 0;
}
