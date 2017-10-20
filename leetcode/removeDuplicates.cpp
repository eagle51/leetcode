#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& nums)
{
    if (nums.size() == 0)
        return 0;
    int index = 1;
    for (int i = 1;i < nums.size();++i) {
        if (nums[i] != nums[i - 1]) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
int main()
{
    vector<int> vi{1,1,2,2,3,3,4};
    cout << removeDuplicates(vi);

    system("pause");
    return 0;
}