#include <iostream>
#include <vector>

using namespace std;
//�ռ临�Ӷ�ΪO(1)��ʱ�临�Ӷȳ����ߡ�������Ҫ150ms����
void rotate(vector<int>& nums, int k) 
{
    int n = (int)(nums.size());
    if (k%n == 0)
        return;
    int i, j;
    k = k%n;
    int temp = nums[n - 1];
    for (i = 0;i < n - k;++i) {
        nums[n - 1 - i] = nums[n - 1 - i - k];
        for (j = n - 1 - i - k;j < n - 1 - i - 1;j++) {
            nums[j] = nums[j + 1];
        }
    }
    nums[j] = temp;
}
//�ռ临�Ӷ�Ϊk,��ʱ19ms
void rotate2(vector<int> &nums, int k)
{
    int n = (int)(nums.size());
    k = k%n;
    if (k == 0)
        return;
    vector<int> temp(nums.end() - k, nums.end());
    while (n - k > 0) {
        n--;
        nums[n] = nums[n - k];
    }
    while (n) {
        n--;
        nums[n] = temp[n];
    }
}
//leetCode�����ģ�����reverse����
void rotate3(vector<int>& nums, int k) 
{
    if (nums.empty()) return;
    int n = nums.size();

    while (k >= n) {
        k = k%n;
    }
    if (k == 0) return;
    reverse(nums.begin(), nums.begin() + n - k);
    reverse(nums.begin() + n - k, nums.end());

    reverse(nums.begin(), nums.end());
}
//�ռ临�Ӷ�n-k
void rotate4(vector<int>& nums, int k)
{
    int N = nums.size();
    k = k%N;
    for (int i = 0; i < N - k; i++) {
        nums.push_back(nums[i]);
    }
    nums = vector<int>(nums.end() - N, nums.end());
}
int main()
{


    system("pause");
    return 0;
}