#include "codeblock.h"

int isPallindrome(string s)
{
    int i =0;
    int j = s.length() -1;
    int flag = 1;
    while (i <= j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else{
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    string s = input();
    cout << isPallindrome(s);
    return 0;
}