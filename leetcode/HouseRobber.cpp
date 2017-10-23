#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//s[0] = 0,s[1] = nums[0],s[i] = max(s[i-1],s[i-2] + nums[i])动态规划
//空间复杂度O(1)
int rob(vector<int>& nums)
{
    int n = nums.size();
    if (n < 1)
        return 0;
    int s2 = 0;
    int s1 = nums[0];
    for (int i = 1;i < nums.size();++i) {
        int temp = s1;
        s1 = max(nums[i] + s2, s1);
        s2 = s1;
    }
    return s1;
}
//leetCode上速度最快的方法，空间复杂度O(n)
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    vector<int> maxMoney(n, 0);
    maxMoney[0] = nums[0];
    if (n >= 1)
    {
        maxMoney[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++)
        {
            maxMoney[i] = max(maxMoney[i - 2] + nums[i], maxMoney[i - 1]);
        }
    }
    return maxMoney[n - 1];
}
int main()
{

    system("pause");
    return 0;
}