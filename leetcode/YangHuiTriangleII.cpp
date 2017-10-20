#include <iostream>
#include <vector>

using namespace std;
//运用二项式的系数求法，数打的时候数据宽度不够，所以不可取
vector<int> getRow1(int rowIndex)
{
    vector<int> result(rowIndex + 1);

    result[0] = 1;
    result[rowIndex] = 1;
    int temp,fac,i;
    for (i = 1; i <= rowIndex/2;++i) {
        temp = 1;
        fac = 1;
        for (int j = 0;j < i;++j) {
            temp = temp*(rowIndex - j);
        }
        for (int k = 0;k < i;++k) {
            fac = fac*(k + 1);
        }
        result[i] = temp / fac;
    }
    while (i < rowIndex) {
        result[i] = result[rowIndex-i];
        i++;
    }
    return result;
}
vector<int> getRow(int rowIndex)
{
    if (rowIndex < 0)
        return vector<int>();

    vector<int> result(rowIndex + 1);
    result[0] = 1;

    for (int i = 0;i <= rowIndex;++i) {
        for (int j = i;j > 0;--j) {
            result[j] = result[j] + result[j - 1];
        }
    }
    return result;
}
int main()
{
    vector<int> a = getRow(30);
    for(auto &c:a)
        cout << c<<" ";
    cout << endl;
    system("pause");
    return 0;
}