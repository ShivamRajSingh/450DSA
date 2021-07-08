#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long countWays(int n, int k){
    if(n <= 1)
        return k;
    ll same = k %1000000007;
    ll diff = (k*(k-1)) %1000000007;
    
    ll total = (same + diff)%1000000007;
    
    for(int i = 3; i <= n; i++){
        same = diff%1000000007;
        diff = (total * (k-1))%1000000007;
        total = (same + diff)%1000000007;
    }
    
    return total;
}
int main()
{
    int n,k;
    cin >> n >> k;
    cout << "No. of ways of painting fence: " << countWays(n,k);
    return 0;
}
