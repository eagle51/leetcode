#include <iostream>
#include <vector>

using namespace std;
int majorityElement(vector<int>& nums) 
{
    int majority = nums[0];
    int j = 1;
    for (int i = 1;i < nums.size();++i) {
        if (nums[i] == majority)
            j++;
        else {
                j--;
        }
        if (j <= 0) {
            majority = nums[i];
            j = 1;
        }
    }
    return majority;
}
int main()
{
    system("pause");
    return 0;
}