#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll inf = 1e9;

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
vector<vector<int>> input(int n, int m)
{
    cout << "Enter elements in matrix : ";
    vector<vector<int>> mat(n, vector<int> (m));
    for(int i =0; i < n; i++){
        for(int j =0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    return mat;
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
void print (vector<int> v){
    int n = v.size();
    for(int i =0; i < n; i++){       
        cout<< v[i] << " ";
    }
    cout << "\n";
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