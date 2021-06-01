vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
{
    int r1,r2,c1,c2;
    r1 = c1 = 0;
    r2 = r-1;
    c2 = c-1;
    
    vector<int> res;
    
    while(r1 <=r2 && c1 <=c2){
        for(int c = c1; c <= c2; c++){
            res.push_back(matrix[r1][c]);
        }
        for(int r = r1+1; r <= r2; r++){
            res.push_back(matrix[r][c2]);
        }
        
        if(r1 < r2 && c1 < c2){
            for(int c = c2-1; c > c1; c--){
                res.push_back(matrix[r2][c]);
            }
            
            for(int r = r2; r > r1; r--){
                res.push_back(matrix[r][c1]);
            }
        }
        
        r1++;
        c1++;
        r2--;
        c2--;
    }
    
    return res;
}
// Input:
// r = 4, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {13, 14, 15,16}}
// Output: 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
