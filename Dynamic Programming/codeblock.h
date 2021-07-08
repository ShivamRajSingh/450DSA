#include <bits/stdc++.h>
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

vector<int> input(int n)
{
    cout << "Enter elements in array : ";
    vector<int> arr(n);
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    return arr;
}