#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string prefix = "";
    for (int idx = 0; strs.size() > 0; prefix += strs[0][idx], idx++)
        for (int i = 0; i < strs.size(); i++)
            if (idx >= strs[i].size() || (i > 0 && strs[i][idx] != strs[i - 1][idx]))
                return prefix;
    return prefix;
}
int main()
{
    vector<string> vstr{"abcde","abc","abcd"};
    cout <<longestCommonPrefix(vstr);
    system("pause");
    return 0;
}