#include <iostream>
#include <string>
#include <vector>
#include<climits>
using namespace std;

int longestCommonSubstr (string a, string b, int n, int m)
{
    vector< vector<int>> t(n+1,vector<int>(m+1));
    for(int i = 0; i < n+1; i++){
        for(int j =0; j < m+1; j++){
            if(i == 0 || j == 0)
                t[i][j] = 0;
        }
    }

    int res = -1;
    for(int i =1; i < n+1; i++){
        for(int j =1; j < m+1; j++){
            if(a[i-1] == b[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                res = max(res,t[i][j]);
            }else{
                t[i][j] = 0;
            }

        }
    }

    for(int i = 0; i < n+1; i++){
        cout << "\n";
        for(int j =0; j < m+1; j++){
            cout << t[i][j] << " ";
        }
    }
    return res == -1 ? 0 : res;
}

int main()
{
    string a,b;
    cout << "Enter String a : ";
    getline(cin,a);
    cout << "Enter String b : ";
    getline(cin,b);

    cout << "Longest common substring : " << longestCommonSubstr(a,b,a.size(),b.size());
}