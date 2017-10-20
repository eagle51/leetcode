#include <iostream>
#include <vector>

using namespace std;
int maxSubArray(vector<int> &nums)
{
    int max = nums[0];
    int index = nums[0];
    for (int i = 1;i < nums.size();++i) {
        if (index >= 0) {
            index += nums[i];
        }
        else {
            index = nums[i];
        }
        if (index > max)
            max = index;
    }
    return max;
}
int main()
{
    vector<int> a{ -2,1,-3,4,-1,2,1,-5,4 };
    cout << maxSubArray(a) << endl;
    system("pause");
    return 0;
}