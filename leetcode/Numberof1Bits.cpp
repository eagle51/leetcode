#include <iostream>
using namespace std;
int hammingWeight(uint32_t n) 
{
    int num = 0;
    for (int i = 0;i < 32;++i) {
        if (n >> i & 1)
            num++;
    }
    return num;
}
int main()
{
    cout << hammingWeight(11);
    system("pause");
    return 0;
}