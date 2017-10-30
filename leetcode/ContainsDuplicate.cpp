#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
//�����㷨�ٶȽ���,��û��map��¼ÿ�����ֳ��ֵĴ������Ŀ�,ÿһ�δ�Ŷ�Ҫ����logn��ʱ��,
//ƽ��ʱ�临�Ӷ�Ϊnlogn
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
//������Ȼ�����ڵ���������ͬ���⾹Ȼ�����ģ����ʱ�临�Ӷ�Ϊ��nlogn+n��,Ҳ����nlogn
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