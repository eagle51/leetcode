#include <iostream>
#include <vector>

using namespace std;
//leetCode�ϵĽⷨ���ڴ��Ż�������
bool isAnagram2(string s, string t) {
    vector<int> charList(26, 0);
    for (size_t index = 0; index < s.size(); ++index) {
        if (s[index] >= 'a' && s[index] <= 'z') charList[s[index] - 'a']++;
    }
    for (size_t index = 0; index < t.size(); ++index) {
        if (t[index] >= 'a' && t[index] <= 'z') charList[t[index] - 'a']--;
    }
    for (size_t index = 0; index < 26; ++index) if (charList[index] != 0) return false;
    return true;
}
//�ҵķ���
bool isAnagram(string s, string t) 
{
    int cnts[128] = { 0 };
    if (s.size() != t.size())
        return false;
    for (int i = 0;i < s.size();++i)
        cnts[s[i]]++;
    for (int i = 0;i < t.size();++i) {
        cnts[t[i]]--;
    }
    for (int i = 0;i < 128;++i)
        if (cnts[i] != 0)
            return false;
    return true;
}

int main()
{
    system("pause");
    return 0;
}