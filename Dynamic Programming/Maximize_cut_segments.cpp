#include "codeblock.h"

int maximizeTheCuts(int n, int x,int y,int z, vector<int> &t)
{
    if(n == 0){
        return 0;
    }
    int a,b,c;
    a = b = c = INT_MIN;
    
    if(t[n] != -1)
        return t[n];

    if(n >= x){
        a = maximizeTheCuts(n-x,x,y,z,t);
    }
    if(n >= y){
        b = maximizeTheCuts(n-y,x,y,z,t);
    }
    if(n >= z){
        c = maximizeTheCuts(n-z,x,y,z,t);
    }

    return t[n] = 1 + max(a,max(b,c));
}
int main()
{
    int n,x,y,z;
    cin >> n >> x >> y >> z; 
    vector<int> t(n+1,-1);
    cout << maximizeTheCuts(n,x,y,z,t);

}