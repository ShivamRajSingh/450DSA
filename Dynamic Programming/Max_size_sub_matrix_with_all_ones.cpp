#include "codeblock.h"

int largestAreaInHistogram( vector<int> hist, int n){
    // stack<int> s;
    // int res = 0;
    // int curr;
    // s.push(0);
    // for(int i =1; i < n; i++){
    //     while(s.empty() == false && arr[s.top()] >= arr[i]){
    //         int tp = s.top();
    //         s.pop();
    //         curr = arr[tp] * (s.empty()) ? i : i-s.top()-1;
    //         res = max(res,curr); 
    //     }   
    //     s.push(i); 
    // }

    // while(s.empty() == false){
    //     int tp = s.top();
    //     s.pop();
    //     curr = arr[tp] * (s.empty()) ? n: n- s.top() -1;
    //     res = max(curr,res);
    // }

    // return res;

    
    // Create an empty stack. The stack holds indexes
    // of hist[] array. The bars stored in stack are
    // always in increasing order of their heights.
    stack<int> s;
 
    int max_area = 0; // Initialize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar
                       // as the smallest bar
 
    // Run through all bars of given histogram
    int i = 0;
    while (i < n)
    {
        // If this bar is higher than the bar on top
        // stack, push it to stack
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
 
        // If this bar is lower than top of stack,
        // then calculate area of rectangle with stack
        // top as the smallest (or minimum height) bar.
        // 'i' is 'right index' for the top and element
        // before top in stack is 'left index'
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
 
            // Calculate the area with hist[tp] stack
            // as smallest bar
            area_with_top = hist[tp] * (s.empty() ? i :
                                   i - s.top() - 1);
 
            // update max area, if needed
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
 
    // Now pop the remaining bars from stack and calculate
    // area with every popped bar as the smallest bar
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i :
                                i - s.top() - 1);
 
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
 
    return max_area;
}

int findMatrix (vector<vector<int>>mat, int n, int m)
{
    vector<vector<int>> t(n , vector<int> (m));
    int max, currMax = -inf;

    for(int j =0; j < m; j++){
        t[0][j] = mat[0][j];
    }


    for(int i =1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1)
                t[i][j] = 1 + t[i-1][j];
        }
    }
    // print(t);

    for(int i =0; i < n; i++){
        max = largestAreaInHistogram(t[i], m);
        if(max > currMax){
            currMax = max;
        }
    }
    return currMax;
}

int main()
{
    cout << "Enter the dimensions of matrix : ";
    int n,m;
    cin >> n >> m;
    vector<vector <int>> a = input(n,m);
    cout << "Max Size sub matrix with all 1s : " << findMatrix(a, n , m);
    return 0;
}
// 4 6
// 1 1 0 0 1 0
// 0 1 1 1 1 1
// 1 1 1 1 1 0
// 0 0 1 1 0 0