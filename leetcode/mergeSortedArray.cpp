#include <iostream>
#include <vector>

using namespace std;

void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int count = m + n - 1;
    --m;
    --n;
    while (m >= 0 && n >= 0) 
        nums1[count--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    while(n>=0) nums1[count--] = nums2[n--];
}

int main()
{
    vector<int> a(6);
    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    for (auto &c : a) {
        cout << c << " ";
    }
    cout << endl;
    vector<int> b{ 2,4,6 };
    mergeSortedArray(a, 3, b, 3);
    for (auto &c : a) {
        cout << c << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}