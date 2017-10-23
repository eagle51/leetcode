#include <iostream>

using namespace std;
//我的算法
uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    for (int i = 0;i < 32;++i) {
        result = result * 2 + n % 2;
        n /= 2;
    }
    return result;
}
//leetCode上最快的,跟我的速度一样，但是移位运算相对快一点
uint32_t reverseBits2(uint32_t n) 
{
    uint32_t result = 0;
    for (int i = 0; i < 32; i++)
        result = (result << 1) + (n >> i & 1);
    return result;
}
int main()
{
    uint32_t x = 43261596;
    cout << reverseBits(x) << endl;
    system("pause");
    return 0;
}