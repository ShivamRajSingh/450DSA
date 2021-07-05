#include<iostream>
#include<string>
using namespace std;

int lcs (string &a, string &b, int m,int n)
{
    if(m == 0 || n == 0)
        return 0;

    if(a[m-1] == b[n-1]){
        return 1 + lcs(a,b,m-1,n-1);
    }else{
        return max(lcs(a,b,m,n-1),lcs(a,b,m-1,n));
    }
}
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int m = a.length();
    int n = b.length();
    cout << lcs(a,b,m,n);
    return 0;
}