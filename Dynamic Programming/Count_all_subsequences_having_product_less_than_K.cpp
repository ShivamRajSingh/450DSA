#include "codeblock.h"

int findSubsequence(vector <int> arr , int k){
    int n = arr.size();
    vector<vector<int>> t (n+1, vector<int> (k+1,0));

    for(int i =1; i < k+1; i++){
        t[n][i] = 1;
    }

    for(int i = n-1; i >= 0; i--){
        for(int j = k; j >= 1; j--){
            t[i][j] = t[i+1][j];

            ll temp = j * arr[i];
            if(temp <= k){
                t[i][j] += t[i+1][temp];
            }
        }
    }
    print(t);

    return t[0][1]-1;
}

int main()
{
    vector<int> arr = input();
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "Subsets found : " << findSubsequence(arr,k);
    // return 0;
}