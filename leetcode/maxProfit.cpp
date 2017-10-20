#include <iostream>
#include <vector>

using namespace std;
//时间复杂度太高
int maxProfit1(vector<int>& prices)
{
    int result = 0;
    for (int i = 0;i < prices.size() - 1;++i) {
        for (int j = i + 1; j < prices.size();++j) {
            if (prices[j] - prices[i] > result)
                result = prices[j] - prices[i];
        }
    }
    return result;
}
int maxProfit(vector<int>& prices)
{
        int result = 0;
        int min = 9999999;
        for (int i = 0;i < prices.size();++i) {
            if (prices[i] < min)
                min = prices[i];
            if (prices[i] - min > result)
                result = prices[i] - min;
        }
        return result;
}
int main()
{
    vector<int> a{ 2,1,2,0,1};
    cout << maxProfit(a) << endl;
    system("pause");
    return 0;
}