#include <iostream>
#include <string>

using namespace std;
//KMP算法，解决字符串匹配问题
int * buildNext(string P)
{
    int m = (int)P.size(), j = 0;
    int *N = new int[m];
    int t = N[0] = -1;
    while (j < m - 1) {
        if (t < 0 || P[j] == P[t]) {
            j++;t++;
            N[j] = P[j] != P[t] ? t : N[t];
        }
        else
            t = N[t];
    }
    return N;
}
int strStr(string T, string P)
{
    int *next = buildNext(P);
    int n = (int)T.size(), i = 0;
    int m = (int)P.size(), j = 0;
    while (j < m&&i < n)
        if (j < 0 || P[j] == T[i]) {
            i++;j++;
        }
        else
            j = next[j];
    delete []next;
    return i - j > n - m ? -1 : i - j;
}
int main()
{
    string T = "abcdefg";
    string P = "cde";
    cout << strStr(T, P) << endl;

    system("pause");
    return 0;
}