#include <bits/stdc++.h>
#define ll long long 
using namespace std;

vector<int> input()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter elements in array : ";
    vector<int> arr(n);
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    return arr;
}

void print (vector<vector<int>> v){
    int n = v.size();
    int m = v[0].size();
    
    for(int i =0; i < n; i++){
        cout << "\n";
        for (int j = 0; j < m; j++){
            cout<< v[i][j] << " ";
    }
    }
}

vector<int> input(int n)
{
    cout << "Enter elements in array : ";
    vector<int> arr(n);
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    return arr;
}