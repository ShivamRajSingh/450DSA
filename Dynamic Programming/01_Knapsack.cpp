#include<bits/stdc++.h>
using namespace std;

int knapsack(int *wt, int *val, int w, int n)
{
   int t[n+1][w+1];
    for(int i =0 ; i < n+1 ; i++){
        for(int j=0; j < w+1 ; j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i =1; i < n+1 ; i++){
        for(int j =1 ; j < w+1 ; j++){
            if(wt[i-1] <= j){
                t[i][j] = max(val[i-1] + t[i-1][j - wt[i-1]] , t[i-1][j]);
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][w];
}
int main()
{
    int *wt,*val;
    int n;
    cout <<"Enter the size of weight and value array : ";
    cin >> n;
    cout << "Weights : ";

    wt = new int[n];
    val = new int[n];

    for(int i =0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << "Value : ";
    for(int i =0; i < n; i++)
    {
        cin >> val[i];
    }

    int capacity;
    cout << "Enter Capacity of Knapsack : ";
    cin >> capacity;

    // int **t;
    // t = new int *[n+1];
    // for(int i =0; i < n+1; i++){
    //     t[i] = new int [capacity+1];
    //         // for (int j =0; j < capacity+1; j++)
    //         // {
    //         //     t[i][j] = -1;
    //         // }
            
    // }

    cout << "Max Profit obtained : " << knapsack(wt, val, capacity,n);

    delete [] wt;
    delete [] val;
    return 0;
}