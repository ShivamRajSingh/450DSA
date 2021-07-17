#include "codeblock.h"
int find (vector<int> arr, int n)
{
    int omax = INT_MIN;

    vector<int> t(n,-1);

    for(int i =0; i < n; i++){
        int max = 0;
        for(int j = 0; j < i; j++){
            if(abs(arr[j]-arr[i]) == 1){
                if(t[j] > max){
                    max = t[j];
                }
            }
        }
        t[i] = 1 + max;

        if(omax < t[i]){
            omax = t[i];
        }
    }

    return omax;
}
int main(){
    vector <int> arr = input();
    cout << "No. of subsets with difference 1 : " << find(arr,arr.size());
}