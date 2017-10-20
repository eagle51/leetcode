#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
//leetCode上速度最快的方法，从后向前遍历，明显速度更快,实在是妙
int lengthOfLastWord2(string s)
{
    if (s.empty())
        return 0;
    int counter = 0;
    for (int i = s.size() - 1;i >= 0; i--)
    {
        if (s[i] == ' ' && counter == 0) continue;
        if (s[i] == ' ') return counter;

        counter++;
    }
}
int lengthOfLastWord(string s) {
    if (s.length() == 0) return 0;
    int lastLen= 0;
    int curLen = 0;
    for (int i = 0;i < s.length();++i) {
        if (s[i] != ' ') {
            curLen++;
        } 
        else {
            if (curLen != 0) {
                lastLen = curLen;
                curLen = 0;
            }
        }
    }
    if (curLen != 0)
        lastLen = curLen;
    return lastLen;
}

int main()
{
    cout << lengthOfLastWord("a") << endl;
    system("pause");
    return 0;
}