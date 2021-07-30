// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int t[n][m];
        memset(t,-1,sizeof(t));
        for(int i =0; i < n; i++){
            t[i][0] = mat[i][0];
        }
        for(int j =0; j < m; j++){
            t[0][j] = mat[0][j];
        }
        
        int res = mat[0][0];
        
        for(int i =1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(mat[i][j] == 1){
                    t[i][j] = 1 + min({t[i][j-1], t[i-1][j], t[i-1][j-1]});
                }else{
                    t[i][j] = 0;
                }
                    
            }
        }
        for(int i =0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(t[i][j] > res){
                    res = t[i][j];
                }
                    
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends