#include <iostream>
#include <string>

using namespace std;
//我的算法
int addDigits(int num) 
{
    if (num == 0)
        return 0;
    return num % 9 == 0 ? 9 : num % 9;
}
//leetCode上算法
int addDigits2(int num) 
{
    return 1 + (num - 1) % 9;
}
int main()
{
    system("pause");
    return 0;
}