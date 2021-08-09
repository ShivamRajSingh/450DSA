#include "codeblock.h"

void reverseString(string &s) {
    int n = s.size() -1;
    vector<char>v;
    for(int i =n; i >=0; i--)
        v.push_back(s[i]);
    
    for(int i =0; i <= n ; i++)
        s[i] = v[i];
}

int main()
{
    string s = input();
    reverseString(s);
    print(s);
    return 0;
}