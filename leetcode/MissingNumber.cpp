#include <iostream>
#include <vector>

using namespace std;
//我的算法
int missingNumber(vector<int>& nums)
{
    int len = nums.size();
    int sum = len * (len+1)/2;
    for (int i = 0;i < len;++i) {
        sum -= nums[i];
    }
    return sum;
}
//改进
int missingNumber2(vector<int>& nums) 
{
    int missing = 0;
    for (int i = 1; i <= nums.size(); i++) {
        missing += i - nums[i - 1];
    }
    return missing;
}
//leetCode上最快的
int missingNumber(vector<int>& nums) 
{
    int result = nums.size();
    int i = 0;
    for (int num : nums) {
        result ^= num;
        result ^= i;
        i++;
    }
    return result;
}
int main()
{
    system("pause");
    return 0;
}