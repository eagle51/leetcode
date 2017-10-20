#include <iostream>
#include <vector>

using namespace std;
//leetcode 上运行最快的算法，空间复杂度为O(n)
int climbStairs(int n) {
    vector<int> dp(n + 1, 0);
    dp[1] = 1; dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];

}

//我的算法空间复杂度为常量,虽然时间复杂度也是O(n)，但是明显运行时间是上面的二倍，上面拿空间换了时间
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
