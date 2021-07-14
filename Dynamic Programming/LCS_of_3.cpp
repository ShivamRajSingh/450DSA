#include <bits/stdc++.h>
using namespace std;
int t[101][101][101];
int LCSof3 (string a, string b, string c, int n1, int n2, int n3)
{
    if(n1 == 0 || n2 == 0 || n3 == 0){
        return 0;
    }

    if(t[n1][n2][n3] != -1){
        return t[n1][n2][n3];
    }

    if(a[n1-1] == b[n2-1] && b[n2-1] == c[n3-1]){
        return t[n1][n2][n3] = 1 + LCSof3(a,b,c,n1-1,n2-1,n3-1);
    }else{
        int p = LCSof3(a,b,c,n1-1,n2,n3);
        int q = LCSof3(a,b,c,n1,n2-1,n3);
        int r = LCSof3(a,b,c,n1,n2,n3-1);
        return t[n1][n2][n3] = max(p,max(q,r));
    }

    return t[n1][n2][n3];
    
}
int main()
{
    memset(t,-1,sizeof(t));
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    cout << LCSof3(a,b,c,a.size(),b.size(),c.size());
}