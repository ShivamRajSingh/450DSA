#include<bits/stdc++.h>
using namespace std;

int maxGold(int n, int m, vector<vector<int>> mat)
{
    vector< vector<int> > t (n, vector<int>(m));
    for (int j = m-1; j >= 0; j--){
        for(int i = n-1; i >=0 ; i--){        
            if(j == m-1){
                t[i][j] = mat[i][j];
            }else if(i == 0){
                t[i][j] = mat[i][j] + max(t[i][j+1], t[i+1][j+1]);
            }else if (i == n-1){
                t[i][j] = mat[i][j] + max(t[i][j+1], t[i-1][j+1]);
            }else{
                t[i][j] = mat[i][j] + max(t[i][j+1], max(t[i-1][j+1],t[i+1][j+1]));
            }
        }
    }

    // for(int i =0; i < n; i++){
    //     cout << "\n";
    //     for (int j = 0; j < m; j++){
    //         cout<< t[i][j] << " ";
    //     }
    // }

    int res = INT_MIN;
    for(int i = 0; i < n; i++){
        res = max(res, t[i][0]);
    }
    return res;
}

int main()
{
    cout << "Enter the dimensions of matrix n x m : ";
    int n,m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i =0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    cout << maxGold(n,m,mat);
    return 0;
}