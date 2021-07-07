#include<bits/stdc++.h>
using namespace std;
int lcs(string s, string t)
{
    // if(s.size() == 0 || t.size() == 0)
    int m = s.size();
    int n = t.size();

    vector< vector<int>> dp(m+1, vector<int> (n+1));

    for(int i =0; i < m+1; i++){
        for(int j =0; j < n+1; j++){
            if(i ==0 || j == 0){
                dp[i][j] = 0;     
            }
        }
    }

    for(int i =1; i < m+1; i++){
        for(int j =1; j < n+1; j++){
            if(s[i-1] == t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];

}
int lps (string s)
{
    string t = s;
    reverse(t.begin(),t.end());
    return lcs(s,t);
}
int main()
{
    string a;
    cout << "Enter String a : ";
    getline(cin,a);
    cout << "Longest Pallindromic Subsequence : " << lps(a); 
    return 0;
}