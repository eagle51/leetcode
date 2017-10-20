#include <iostream>
#include <vector>
#include <map>

using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) 
{
    int low = 0;
    int high = numbers.size() - 1;
    while (numbers[low] + numbers[high] != target) {
        if (target > numbers[low] + numbers[high])
            low++;
        else 
            high--;
    }
    return { low + 1,high + 1 };
}
int main()
{
    system("pause");
    return 0;
}