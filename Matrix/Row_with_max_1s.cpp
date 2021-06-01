int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
    int i = 0;
    int j = 0;
    
    while(i < m && j < n)
    {
        if (arr[i][j] == 1){
            return i;
        }else if (arr[i][j] == 0){
            i++;
        }
    }
}
// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).