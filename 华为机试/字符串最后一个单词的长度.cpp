/*
描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）

输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int ans = 0, i = s.size() - 1;
    while (i >= 0 && s[i] != ' ')
    {
        i--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

/* 涉及知识点

C++:cin、cin.getline()、getline()的用法

一.cin>>
用法1：输入一个数字或字符
#include <iostream>
using namespace std;
main ()
{
int a,b;
cin>>a>>b;
cout<<a+b<<endl;
}
用法2：接收一个字符串，遇“空格”、“TAB”、“回车”就结束
#include <iostream>
using namespace std;
main ()
{
char a[20];
cin>>a;
cout<<a<<endl;
}

二.cin.getline()
用法:接收一个字符串，可以接收空格并输出
#include <iostream>
using namespace std;
main ()
{
char m[20];
cin.getline(m,5);
cout<<m<<endl;
}

输入：jkljkljkl
输出：jklj

接收5个字符到m中，其中最后一个为'\0'，所以只看到4个字符输出；

如果把5改成20：
输入：jkljkljkl
输出：jkljkljkl

输入：jklf fjlsjf fjsdklf
输出：jklf fjlsjf fjsdklf

延伸：
1、cin.getline()实际上有三个参数，cin.getline(接收字符串的变量,接收字符个数,结束字符)
2、当第三个参数省略时，系统默认为'\0'
3、如果将例子中cin.getline()改为cin.getline(m,5,'a');当输入jlkjkljkl时输出jklj，输入jkaljkljkl时，输出jk

三.getline()
用法：接收一个字符串，可以接收空格并输出，需包含“#include<string>”

#include<iostream>
#include<string>
using namespace std;
main ()
{
string str;
getline(cin,str);
cout<<str<<endl;
}

输入：jkljkljkl
输出：jkljkljkl

输入：jkl jfksldfj jklsjfl
输出：jkl jfksldfj jklsjfl

四、注意的问题
1、cin.getline()属于istream流，而getline()属于string流，是不一样的两个函数

2、当同时使用cin>>,getline()时，需要注意的是，在cin>>输入流完成之后，getline()之前，需要通过

str="\n";
getline(cin,str);

的方式将回车符作为输入流cin以清除缓存，如果不这样做的话，在控制台上就不会出现getline()的输入提示，而直接跳过，因为程序默认地将之前的变量作为输入流。


#include<iostream>
#include<string>
#include<sstream>
using namespace std;
 
int main(){
    int age;
    //standard input(cin)
    cout<<"Please enter an integer value as your age: ";
    cin>>age;
    cout<<"Your ager is: "<<age<<".\n";
    //cin and string
    string mystr;
    cout<<"What's your name? "<<endl;
    mystr="\n";
    getline(cin,mystr);
 
    getline(cin,mystr);
    cout<<"Hello,"<<mystr<<".\n";
    char sex;
    cout<<"Please enter a F or M as your sex: ";
    cin>>sex;
    cout<<"Your sex is: "<<sex<<endl;
    cout<<"What's your favorite team? ";
    mystr="\n";
    getline(cin,mystr);
 
    getline(cin,mystr);
    cout<<"I like "<<mystr<<".\n";
 
    system("pause");
    return 0;
}
*/
