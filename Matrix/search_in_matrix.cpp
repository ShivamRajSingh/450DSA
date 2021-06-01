 bool binarySearch (vector<vector<int>>& matrix, int r, int target){
    int lo = 0;
    int hi = matrix.size()-1;
    int mid = (lo+hi)/2;
    
    while(lo <= hi){
        if(matrix[r][mid] == target){
            return true;
        }else if (target > matrix[r][mid]){
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return false;
    
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i = 0;
    int j = matrix[0].size()-1;
    
    while(i < matrix.size() && j>=0)
    {
        if(matrix[i][j]==target)
            return true;
        else if(matrix[i][j]>target)
            j--;
        else
            i++;
    }
    return false;
}
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true