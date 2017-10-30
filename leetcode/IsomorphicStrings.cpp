#include <iostream>
#include <string>
#include <map>

using namespace std;
//我的算法
bool isIsomorphic(string s, string t) 
{
    map<char, char> m1, m2;
    for (int i = 0;i < s.size();++i) {
        if (m1.find(s[i]) != m1.end()) {
            if (t[i] != m1[s[i]])
                return false;
        }
        else {
            if (m2.find(t[i]) != m2.end())
                return false;
            else
                m2[t[i]] = s[i];
            m1[s[i]] = t[i];
        }
    }
    return true;
}
//leedCode上最快的算法
bool isIsomorphic(string s, string t) {
    int m1[256] = { 0 }, m2[256] = { 0 }, n = s.size();
    for (int i = 0; i < n; i++) {
        if (m1[s[i]] != m2[t[i]]) return false;
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}
int main()
{
    cout << isIsomorphic("egg", "add") << endl;
    system("pause");
    return 0;
}