#include <iostream>
#include <unordered_map>

using namespace std;
/*******************************************
*������һ�������ٶȸ��죬��Ϊ��C++�ı�׼����������޻���ı�Ϊ������ģ��������google
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