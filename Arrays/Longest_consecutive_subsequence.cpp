#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n)
{
    unordered_set <int> s;
    int res =0;
    for(int i =0; i < n; i++){
        s.insert(arr[i]);
    }

    for(int i =0; i < n; i++){
        if(s.find(arr[i]-1) == s.end()){
            int j = arr[i];
            while(s.find(j) != s.end()){
                j++;
            }
            res = max(res , j-arr[i]);
        }
    }

    return res;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
    for(int i =0; i < n; i++)
        cin >> arr[i];

    cout << findLongestConseqSubseq(arr,n);

    delete [] arr;
    return 0;
     // n = 7;
    // arr[] = {2,6,1,9,4,5,3};
}