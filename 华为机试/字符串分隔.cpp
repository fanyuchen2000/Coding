/*
描述
•输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

输入描述：
连续输入字符串(每个字符串长度小于等于100)

输出描述：
依次输出所有分割后的长度为8的新字符串
*/

#include <iostream>
using namespace std;

int main() {
    string s;
    while(cin>>s)
    {
        int len = s.size();
        if(len%8 != 0)
        {
            int count = 8 - len%8;
            s.append(count,'0');
        }
        int newlen = s.size();
        for(int i = 0;i<newlen;i+=8)
        {
            cout<<s.substr(i,8)<<endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")


/*
涉及知识点

一、append 用法
1.在字符串的末尾添加字符串str。
    s1.append(s2);  //把字符串s连接到当前字符串的结尾

2.在字符串的末尾添加字符串str的子串,子串以subpos索引开始，长度为sublen。
    s1.append(s2,4,5);  //把字符串从s2中从4开始的5个字符连接到当前字符串的结尾

3.在字符串的末尾添加字符串s中的前n个字符。
    s.append(c,3);

4.在字符串的末尾添加n个字符c。
    s1.append(3, '!');  //在当前字符串结尾添加3个字符!

5.在字符串的末尾添加以迭代器first和last表示的字符序列。
    s1.append(s2.begin()+4，s2.end());//把s2的迭代器begin()+4和end()之间的部分连接到当前字符串的结尾

*/