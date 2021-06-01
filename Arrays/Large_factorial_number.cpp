#include<bits/stdc++.h>
using namespace std;
#define ll long long
void factorial (ll int n)
{
    if(n == 0 || n == 1){
        cout << "1";
        return;
    }
        
    ll int a[100000] = {-1};
    ll int end =0, carry =0;
    a[0] = 1;
    
    for(int i =2; i <= n; i++){
        for(int j =0; j <= end; j++){
            ll int mul = a[j]*i + carry;
            a[j] = mul % 10;
            carry = mul /10;
        }
        while(carry != 0){
            a[++end] = carry % 10;
            carry = carry /10;
        }
    }
    
    for(int i = end; i >=0; i--){
        cout<<a[i];
    }
    
}
int main()
 {
	ll int t;
    cin >> t;
    while(t--)
    {
        ll int n;
        cin >> n;
        // ll int t[n] = {-1};
        factorial(n);
        cout << "\n";
    }
	return 0;
}