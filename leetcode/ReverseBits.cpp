#include <iostream>

using namespace std;
//�ҵ��㷨
uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    for (int i = 0;i < 32;++i) {
        result = result * 2 + n % 2;
        n /= 2;
    }
    return result;
}
//leetCode������,���ҵ��ٶ�һ����������λ������Կ�һ��
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