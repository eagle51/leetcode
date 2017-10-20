#include <iostream>
#include <vector>

using namespace std;
int searchInsert(vector<int>& nums, int target) {
    if (!nums.size())
        return 0;
    int low = 0;
    int high = nums.size();
    while (low < high) {
        int mid = (low + high) >> 1;
        if (target < nums[mid]) {
            high = mid;
        }
        else if (target > nums[mid]) {
            low = mid + 1;
        }
        else
            return mid;
    }
    return low;
}

int main()
{
    vector<int> a{0,1,2,4,5};
    cout << searchInsert(a,7) << endl;
    system("pause");
    return 0;
}