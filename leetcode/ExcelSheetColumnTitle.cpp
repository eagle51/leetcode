#include <iostream>
#include <string>

using namespace std;
//leetCode
string convertToTitle1(int n) {
    string title;
    while (n)
    {
        title.insert(title.begin(), (n - 1) % 26 + 'A');
        n = (n - 1) / 26;
    }
    return title;
}
//ÎÒµÄ
string convertToTitle(int n) 
{
    string s;
    //char a[]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
    //    'Q','R','S','T','U','V','W','X','Y','Z' };
    while (n) {
        s = (char)('A'+ (n-1)%26 )+ s;
        n = (n-1)/26;
    }
    return s;
}
int main()
{
    cout << convertToTitle(28) << endl;
    system("pause");
    return 0;
}