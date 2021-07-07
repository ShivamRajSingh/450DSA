#include<iostream>
#include<string>
#include<vector>
#include<climits>

using namespace std;

int editDistance(string s, string t,vector<vector<int>> &dp) {
    if(s.size() == 0 || t.size() == 0)
        return max(s.size(),t.size());
    
    int m = s.size();
    int n = t.size();

    if(dp[m][n] != -1)
        return dp[m][n];

    if(s[0] == t[0]){
        dp[m][n] = editDistance(s.substr(1),t.substr(1),dp);
    }else{
        dp[m-1][n]= editDistance(s.substr(1),t,dp);
        dp[m][n-1] = editDistance(s,t.substr(1),dp);
        dp[m-1][n-1] = editDistance(s.substr(1),t.substr(1),dp);

        dp[m][n] = 1 + min(dp[m-1][n],min(dp[m][n-1],dp[m-1][n-1]));
    }

    return dp[m][n];
        
}
int main()
{
    string a,b;
    cout << "Enter String a : ";
    getline(cin,a);
    cout << "Enter String b : ";
    getline(cin,b);
    vector<vector<int>> dp(a.size()+1,vector<int> (b.size()+1,-1));
    cout << "Edit distance : " << editDistance(a,b,dp);
}
