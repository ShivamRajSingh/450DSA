#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long findMinDiff(vector<long long> arr, long long n, long long m){
    //code
    sort(arr.begin(),arr.end());
    int windowStart = 0;
    long long int result = numeric_limits<int>::max();
    for(int windowEnd = m-1; windowEnd < n; windowEnd++){
        result = min(result ,(arr[windowEnd] - arr[windowStart]));
        windowStart++;
    }
    return result;
}   
int main()
{
    int N = 8, M = 5;
    vector<ll int> arr = {3, 4, 1, 9, 56, 7, 9, 12};
    cout << findMinDiff(arr,N, M);

}