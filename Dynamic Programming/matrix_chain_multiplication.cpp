#include "codeblock.h"
using namespace std;

int solve(vector<int> arr, int i , int j, vector< vector<int>>t)
{
    if(i >= j)
        return 0;

    if(t[i][j] != -1)
        return t[i][j];
    t[i][j] = INT_MAX;
    for(int k =i; k < j; k++){
        t[i][j] = min(t[i][j],solve(arr,k+1,j,t) + solve(arr,i,k,t) + arr[i-1]*arr[k]*arr[j]);
    }   

    return t[i][j];
}
int matrixMultiplication(int n, vector<int>arr)
{
    vector< vector<int>>t(1001,vector<int> (1001,-1));
    solve(arr,1,n-1,t);
}
int main()
{
    vector<int> arr = input();
    cout << matrixMultiplication(arr.size(),arr);
    return 0;
}