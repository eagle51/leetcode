#include <iostream>
#include <unordered_map>

using namespace std;
/*******************************************
*加上这一段运行速度更快，因为将C++的标准输入输出从无缓冲的变为带缓冲的，具体可以google
static int x = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
*******************************************/
vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> hash;
    vector<int> result;
    for (int i = 0;i < nums.size();++i) {
        int temp = target - nums[i];
        if (hash.find(temp) != hash.end()) {
            result.push_back(hash[temp]);
            result.push_back(i);
            return result;
        }
        hash[nums[i]] = i;
    }
    return result;
}
int main()
{

    system("pause");
    return 0;
}