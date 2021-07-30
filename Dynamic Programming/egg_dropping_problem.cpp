#include "codeblock.h"
int superEggDrop (int k, int n)
{
    vector<vector<int>>t(k+1, vector<int> (n+1,0));

    for(int i =1; i < k+1; i++){
        for(int j =1; j < n+1; j++){
            if(i == 1){
                t[i][j] = j;
            }else if(j == 1){
                t[i][j] = 1;
            }else{
                int tj,pj;
                tj = j-1;
                pj = 0;
                int mini = INT_MAX;
                while(tj >=0){
                    int val1 = t[i-1][pj];
                    int val2 = t[i][tj];
                    int temp = max(val1,val2);
                    mini = min(mini, temp);
                    tj--;
                    pj++;
                }
                t[i][j] = 1+ mini;    
            }
        }
    }
    return t[k][n];
}
int main()
{
    int e,f;
    cout << "Enter eggs and floors : ";
    cin >> e >> f;
    cout << "Min attempts : " << superEggDrop(e,f);
    return 0;
}