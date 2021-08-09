#include "codeblock.h"

bool areRotations(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;
 
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main()
{
    string s1 = input();
    string s2 = input();
    cout << areRotations(s1,s2);
    return 0;
}