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