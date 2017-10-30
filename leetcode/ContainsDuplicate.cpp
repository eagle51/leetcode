#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
//这种算法速度较慢,还没有map记录每个数字出现的次数来的快,每一次大概都要花费logn的时间,
//平均时间复杂度为nlogn
bool containsDuplicate(vector<int>& nums) 
{
    set<int> s;
    for (int i = 0;i < nums.size();++i) {
        if (s.find(nums[i]) != s.end())
            return true;
        else
            s.insert(nums[i]);
    }
    return false;
}
//先排序，然后看相邻的数字是相同，这竟然是最快的，最差时间复杂度为（nlogn+n）,也就是nlogn
bool containsDuplicate2(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if (nums.size() < 2) return false;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) return true;
    }
    return false;
}
int main()
{

    system("pause");
    return 0;
}