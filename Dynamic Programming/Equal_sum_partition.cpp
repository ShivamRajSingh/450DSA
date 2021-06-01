#include "codeblock.h"
bool findSubset (vector<int> &arr, int sum )
{
    int n = arr.size();
    vector<vector<bool>> t (n+1, vector<bool>(sum+1));
    for(int i =0; i < n+1; i++){
        for(int j =0; j < sum+1; j++){
            if(i == 0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
            
        }
    }
    for(int i =1; i < n+1; i++){
        for(int j =1; j < sum+1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    //    for(int i =0; i < n+1; i++){
    //     for(int j =0; j < sum+1; j++){
    //        cout << t[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
   
    return t[n][sum];
}
bool checkEqualSubsets(vector<int> arr)
{
    int n = arr.size();
    int sum = 0;

    for(int i =0; i < n; i++)
        sum += arr[i];
    
    if(sum % 2 != 0)
        return false;
    else
        return findSubset(arr,sum/2);
}

int main ()
{
    vector <int> arr = input();
    checkEqualSubsets(arr) == true ? cout << "Possible": cout << "Not Possible";
    return 0;
}