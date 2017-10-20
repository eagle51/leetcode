#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    if (nums.size() == 0)
        return 0;
    int len = nums.size(), index = 0;
    for (int i = 0;i < len;++i) {
        if (nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
int main()
{
    vector<int> nums{ 1,2,1,3,4 };
    cout << removeElement(nums,1);

    system("pause");
    return 0;
}