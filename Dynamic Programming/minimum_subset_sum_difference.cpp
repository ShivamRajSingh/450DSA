#include "codeblock.h"
using namespace std;
vector<int> subsetSum(vector<int> &arr, int &target)
{
    int n = arr.size();
    int t[n+1][target+1];
    for(int i =0; i < n+1; i++){
        for(int j =0; j < target+1; j++){
            if(i == 0)
                t[i][j] = false;
            if(j == 0)
                t[i][j] = true;
        }
    }

    for(int i =1; i < n+1; i++){
        for(int j =1; j < target+1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    // for(int i =0; i < n+1; i++){
    //     for(int j =0; j < target+1; j++){
    //         cout << t[i][j] << " ";
    //     }
    //     cout<<"\n";
    // }
    vector<int> res;
    for(int i =0; i < target+1; i++){
        res.push_back(t[n][i]);
    }
    return res;
}
int minSubsetSumDifference(vector<int> &arr)
{
    int sum = 0;
    for(int i =0; i < arr.size(); i++)
        sum += arr[i];
    
    vector<int> res = subsetSum(arr,sum);
    int ans = INT_MAX; 
    for(int i = 0; i < res.size(); i++){
        if(res[i] == 1)
            ans = min(ans,abs(sum-2*i));
    }
    return ans;
}
int main()
{
    vector <int> arr = input();
    cout << minSubsetSumDifference(arr);
}