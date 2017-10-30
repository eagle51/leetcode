#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    unordered_map<int, int> m;
    for (int i = 0;i < nums.size();++i) {
        if (m.find(nums[i]) != m.end() && (i - m[nums[i]] <= k)) {
            return true;
        }
        else
            m[nums[i]] = i;
    }
    return false;
}
int main()
{
    vector<int> a{ 1,2,3,4,5,3 };
    cout << containsNearbyDuplicate(a, 3);

    system("pause");
    return 0;
}
