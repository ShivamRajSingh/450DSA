#include<iostream>
#include<unordered_map>
using namespace std;

int countOccurence(int arr[], int n, int k){
    unordered_map <int, int> mp;
    for(int i =0; i < n; i++){
        mp[arr[i]]++;
    }
    int x = n/k;

    int count =0;
    for(auto i : mp){
        if(i.second > x){
            count++;
        }
    }
    return count;
}
int main (){
    int N = 8;
    int arr[] = {3,1,2,2,1,2,3,3};
    int k = 4;
    cout << countOccurence(arr,N,k) << endl;
}