/*
描述
写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）

数据范围： 
1≤n≤1000 

输入描述：
第一行输入一个由字母、数字和空格组成的字符串，第二行输入一个字符（保证该字符不为空格）。

输出描述：
输出输入字符串中含有该字符的个数。（不区分大小写字母）
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char c = tolower(getchar());
    int n = 0;
    for(auto i:s)
    {
        if(tolower(i) == c)
            n++;
    }
    cout<<n<<endl;
    return 0;

}