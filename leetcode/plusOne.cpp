#include <iostream>
#include <vector>

using namespace std;
//leetCode运行最快的程序
vector<int> plusOne2(vector<int>& digits) {
    int n = digits.size();
    int i = n - 1;
    while (i >= 0 && digits[i] == 9)
    {
        i--;
    }
    if (i < 0)
    {
        digits.push_back(0);
        digits[0] = 1;
        for (int k = 1;k < n;k++)
        {
            digits[k] = 0;
        }
    }
    else
    {
        digits[i]++;
        while (i + 1 < n)
        {
            i++;
            digits[i] = 0;
        }
    }
    return digits;
}

//我的程序
vector<int> plusOne(vector<int>& digits)
{
    if (digits.size() == 0) {
        digits.push_back(1);
        return digits;
    }
    for (int i = digits.size() - 1;i >= 0;--i) {
        if ((i == 0) && ((digits[i] + 1) / 10 != 0)) {
            digits[i] = 0;
            digits.insert(digits.begin(), 1);
            return digits;
        }
        if ((digits[i]+=1) / 10 == 0)
            break;
        else {
            digits[i] = 0;
        }
    }
    return digits;
}

int main()
{
    vector<int> a{ 9,9 };
    plusOne(a);
    for (auto &c : a) {
        cout << c << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}