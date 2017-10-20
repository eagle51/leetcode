#include <iostream>
#include <string>

using namespace std;
//leetCode上运行速度最快的程序
string addBinary2(string a, string b) {

    int i = a.size() - 1;
    int j = b.size() - 1;
    int sum = 0;
    string result = "";
    while (i >= 0 || j >= 0 || sum == 1)  //why sum ==1?
    {
        sum += ((i >= 0) ? a[i] - '0' : 0);    //invalid indices it should be zero.cause i != j. 
        sum += ((j >= 0) ? b[j] - '0' : 0);    //add string 2 at index j , if its within bounds, else add zero 

                                               //now this is like normal addition(decimal). sum can be either 1 or 2 or 0. so real su is sum%2 and the carry is sum/2
        result = char(sum % 2 + '0') + result;  //+ '0' for converting integer to character 
        sum /= 2;   //1 if any carry else 0. setting carry in the sum, so there isno need to reset the sum in the next iteration 
        i--;
        j--;  //movet to the next string literal

    }
    return result;

}
//leetcode上的代码都是先将二进制string转化为整形数，然后相加，再将整形数转化为string
//我的方法不用将string转化为整形，可以支持更长的string
string addBinary(string a, string b)
{
    string result;
    int i, j;
    int s = 0;
    int temp;
    for (i = a.length() - 1,j = b.length() - 1;i >= 0 && j>=0;--i,--j) {
        temp = a[i] - '0' + b[j] - '0' + s;
        if (temp == 3) {
            result = "1" + result;
            s = 1;
        }
        else if (temp == 2) {
            result = "0" + result;
            s = 1;
        }
        else if(temp == 1){
            result = "1" + result;
            s = 0;
        }
        else {
            result = "0" + result;
        }
    }
    while(i >= 0) {
        temp = a[i] - '0' + s;
        if (temp == 2) {
            result = "0" + result;
            s = 1;
        }
        else if (temp == 1) {
            result = "1" + result;
            s = 0;
        }
        else {
            result = "0" + result;
        }
        i--;
    }
    while (j >= 0) {
        int temp = b[j] - '0' + s;
        if (temp == 2) {
            result = "0" + result;
            s = 1;
        }
        else if (temp == 1) {
            result = "1" + result;
            s = 0;
        }
        else {
            result = "0" + result;
        }
        j--;
    }
    if (s == 1)
        result = "1" + result;
    return result;
}

int main()
{
    string a {"100"};
    string b = "110010";
    string c = addBinary(a, b);
    cout << c << endl;

    system("pause");
    return 0;
}