#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll maxProduct(ll int *a, int n) {
	   ll int max_overall,max_ending,min_ending;
	   max_overall = max_ending = min_ending = a[0];
	   
	   for(int i =1; i < n; i++){
	       ll int temp = max_ending;
	       max_ending = max ( { a[i] , a[i] * max_ending , a[i]* min_ending });
	       min_ending = min ( { a[i] , a[i] * temp, a[i]* min_ending });
	       max_overall = max (max_overall, max_ending);
	   }
	   
	   return max_overall;
}
int main(){
    ll int N;
	cin >> N;
    ll int Arr[N];
	for(int i =0; i < N; i++)
		cin >> Arr[i];

    cout << maxProduct(Arr , N);
}