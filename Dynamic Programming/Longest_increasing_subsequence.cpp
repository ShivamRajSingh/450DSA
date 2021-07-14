#include "codeblock.h"

int lengthOfLIS(vector<int>& arr) {
    int n = arr.size();
    int omax = INT_MIN;

    vector<int> t(n,-1);

    for(int i =0; i < n; i++){
        int max = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
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
    vector<int> arr = input();
    cout << "Longest increasing subsequence : " << lengthOfLIS(arr);

}