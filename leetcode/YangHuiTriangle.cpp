#include <iostream>
#include <vector>

using namespace std;
//leetcode�������㷨�����ڿռ�һ���Է��䣬���������ݡ�
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> vec(numRows);
    for (int i = 0; i < numRows; i++) {
        vec[i].resize(i + 1);
    }
    for (unsigned j = 0; j < numRows; j++) {
        vec[j][0] = 1;
        vec[j][j] = 1;
        if (j == 0 || j == 1) { continue; }
        for (unsigned k = 1; k < j; k++) {
            vec[j][k] = vec[j - 1][k - 1] + vec[j - 1][k];
        }
    }
    return vec;
}
//�ҵķ���
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> result;
    for (int i = 1;i < numRows+1;++i) {
        vector<int> temp(i,0);
        for (int j = 0;j < i;++j) {
            if (j == 0) {
                temp[j] = 1;
                continue;
            }
            if (j == i - 1) {
                temp[j] = 1;
                continue;
            }
            temp[j] = result[i-2][j-1] + result[i - 2][j];
        }
        result.push_back(temp);
    }
    return result;
}
int main()
{
    vector<vector<int>> a = generate(5);
    for (auto c : a) {
        for (auto b : c)
            cout << b << "";
        cout << endl;
    }
    system("pause");
    return 0;
}