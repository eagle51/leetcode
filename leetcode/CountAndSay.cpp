/************************************************************************/
/*leetCode上运行速度最快的程序，自己写了一遍                                  */
/************************************************************************/
#include <iostream>
#include <string>
using namespace std;
string countAndSay(int n)
{
    if (n == 1) return "1";
    n -= 2;
    string s = "11", temp;

    while (n--) {
        int count = 1;
        temp = "";
        for (int i = 1;i < s.size();++i) {
            if (s[i] == s[i - 1])
                count++;
            else {
                temp.push_back('0' + count);
                temp.push_back(s[i-1]);
                count = 1;
            }
        }
        temp.push_back('0' + count);
        temp.push_back(s[s.size() - 1]);
        s = temp;
    }
    return s;
}
int main()
{
    cout << countAndSay(20) << endl;

    system("pause");
    return 0;
}
/*2017年10月8日20:27:51*/