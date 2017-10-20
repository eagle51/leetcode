#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int>& prices)
{
    if (prices.empty())
        return 0;
    int min = INT_MAX;
    int maxprofit = 0;
    int result = 0;
    for (int i = 0; i < prices.size() - 1;++i) {
        if (prices[i] < min) {
            min = prices[i];
        }
        if (prices[i] - min > maxprofit)
            maxprofit = prices[i] - min;
        if (prices[i] - min > prices[i + 1] - min) {
            result += maxprofit;
            maxprofit = 0;
            min = INT_MAX;
        }
    }
    if (prices[prices.size() - 1] - min > maxprofit)
        maxprofit = prices[prices.size() - 1] - min;
    result += maxprofit;
    return result;
}

int main()
{
    system("pause");
    return 0;
}