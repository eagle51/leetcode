#include <iostream>
#include <set>

using namespace std;
//���ѷ���,����happy���ļ��������һ������4����������ж��м��һ��n��ֵΪ4��Ҳ����ֹ���ѭ����
bool isHappy(int n) 
{
    set<int> s;
    while (n != 1) {
        int t = 0;
        if (s.count(n))
            break;
        else
            s.insert(n);
        while (n) {
            t += (n % 10)*(n % 10);
            n /= 10;
        }
        n = t;
    }
    return n == 1;
}
//leetCode����췽��,���ж������Ƿ��л�һ��ԭ��
int digitsquaresum(int n) {
    int digit = 0;
    int sum = 0;
    while (n != 0) {
        digit = n % 10;
        sum += digit*digit;
        n = n / 10;
    }
    return sum;
}
bool isHappy2(int n) {
    int fast, slow;
    fast = slow = n;
    do {
        slow = digitsquaresum(slow);
        fast = digitsquaresum(fast);
        fast = digitsquaresum(fast);
    } while (fast != slow);
    if (slow == 1) return true;
    else return false;
}
int main()
{
    for (int i = 2;i < 1000;++i) {
        if (isHappy2(i))
            cout << i << endl;
    }
    system("pause");
    return 0;
}