#include <iostream>
#include <vector>

using namespace std;
//�ҵ��㷨
int missingNumber(vector<int>& nums)
{
    int len = nums.size();
    int sum = len * (len+1)/2;
    for (int i = 0;i < len;++i) {
        sum -= nums[i];
    }
    return sum;
}
//�Ľ�
int missingNumber2(vector<int>& nums) 
{
    int missing = 0;
    for (int i = 1; i <= nums.size(); i++) {
        missing += i - nums[i - 1];
    }
    return missing;
}
//leetCode������
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